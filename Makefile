# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 16:43:27 by jekim             #+#    #+#              #
#    Updated: 2021/07/05 11:42:58 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
BNAME		=	checker

CC			=	gcc
CCFLAG		=	-Wall -Wextra -Werror
SNTZ		=	-g3 -fsanitize=address
INCLUDE		=	-I$(INC_DIR) -I$(LIBFT_PATH) -I$(LIBPS_PATH)
LIB			=	-lft -L$(LIBFT_PATH) -lps -L$(LIBPS_PATH)
LIB2		= 	$(LIBFT) $(LIBPS)

LIBFT		=	$(LIBFT_PATH)libft.a
LIBPS		=	$(LIBPS_PATH)libps.a
LIBPS_PATH	=	./lib/libps/
LIBFT_PATH	=	./lib/libft/

OBJ_DIR		=	./obj/
INC_DIR		=	./includes/
PS_FILE_DIR	=	./src/push_swap/
CK_FILE_DIR	=	./src/checker/

PS_FILE		=	push_swap.c

CK_FILE		=	checker.c

PS_OBJ_FILE	=	$(PS_FILE:.c=.o)
CK_OBJ_FILE	=	$(CK_FILE:.c=.o)

PS_SRC		=	$(addprefix $(PS_FILE_DIR), $(PS_FILE))
CK_SRC		=	$(addprefix $(CK_FILE_DIR), $(CK_FILE))

PS_OBJ		=	$(addprefix $(OBJ_DIR), $(PS_OBJ_FILE))
CK_OBJ		=	$(addprefix $(OBJ_DIR), $(CK_OBJ_FILE))


all			:	mklib $(NAME)

$(NAME)		:	$(PS_OBJ)
	@$(CC) $(CCFLAG) $(PS_OBJ) $(LIB2) $(INCLUDE) -o $(NAME)
	@echo "\033[0;92m* $(NAME) program file was created *\033[0m"

$(OBJ_PATH)%.o : $(PS_SRC)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CCFLAG) $(LIB2) $(INCLUDE) $< -o $@

mklib			:
	@make -C $(LIBFT_PATH)
	@make -C $(LIBPS_PATH)

bonus		:	mklib $(BNAME)

$(BNAME)	:	$(CK_OBJ)
	@$(CC) $(CCFLAG) $(CK_OBJ) $(LIB2) $(INCLUDE) -o $(BNAME)
	@echo "\033[0;92m* $(BNAME) program file was created *\033[0m"

$(OBJ_PATH)%.o : $(CK_SRC)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CCFLAG) $(LIB) $(INCLUDE) $< -o $@

clean		:
	@make -C $(LIBFT_PATH) clean
	@make -C $(LIBPS_PATH) clean
	@rm -rf $(PS_OBJ) $(CK_OBJ)
	@echo "\033[0;91m* $(NAME) and $(BNAME) object files were deleted* \033[0m"

fclean		:	clean
	@make -C $(LIBFT_PATH) fclean
	@make -C $(LIBPS_PATH) fclean
	@rm -f $(NAME) $(BNAME)
	@echo "\033[0;91m* $(NAME) and $(BNAME) were deleted* \033[0m"

re			:	fclean all

.PHONY: all, clean, fclean, re