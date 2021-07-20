# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <arabi1549@naver.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 16:43:27 by jekim             #+#    #+#              #
#    Updated: 2021/07/20 09:08:05 by jekim            ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
BNAME		=	checker

CC			=	gcc
CCFLAG		=	-Wall -Wextra -Werror
SNTZ		=	-fsanitize=address -g3
INCLUDE		=	-I ./includes -I$(LIBFT_DIR) -I$(LIBPS_DIR)
LIB			=	-L$(LIBFT_DIR) -L$(LIBPS_DIR) -lft -lps

LIBPS_DIR	=	./lib/libps/
LIBFT_DIR	=	./lib/libft/
LIBFT		=	$(LIBFT_DIR)libft.a
LIBPS		=	$(LIBPS_DIR)libps.a

OBJ_DIR		=	./obj/
INC_DIR		=	./includes/
PS_FILE_DIR	=	./src/push_swap/
CK_FILE_DIR	=	./src/checker/

PS_FILE		=	push_swap.c \
				validate.c	\
				bubblesort.c	\
				swap.c		\
				utils.c

PS_OBJ_FILE	=	$(PS_FILE:.c=.o)
CK_OBJ_FILE	=	$(CK_FILE:.c=.o)

PS_OBJ		=	$(addprefix $(OBJ_DIR), $(PS_OBJ_FILE))
CK_OBJ		=	$(addprefix $(OBJ_DIR), $(CK_OBJ_FILE))


all			:	$(NAME)

$(OBJ_DIR)%.o : $(PS_FILE_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CCFLAG) $(INCLUDE) $< -c -o $@

$(NAME)		:	$(PS_OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(LIBPS_DIR)
	$(CC) $(CCFLAG) $(PS_OBJ) $(LIB) $(INCLUDE) -o $@
	@echo "\033[0;92m* $(NAME) program file was created *\033[0m"

clean		:
	@make -C $(LIBFT_DIR) clean
	@make -C $(LIBPS_DIR) clean
	@rm -rf $(PS_OBJ) $(CK_OBJ)
	@echo "\033[0;91m* $(NAME) and $(BNAME) object files were deleted* \033[0m"


fclean		:	clean
	@make -C $(LIBFT_DIR) fclean
	@make -C $(LIBPS_DIR) fclean
	@rm -f $(NAME) $(BNAME)
	@echo "\033[0;91m* $(NAME) and $(BNAME) were deleted* \033[0m"


re			:	fclean all

.PHONY: all, clean, fclean, re