# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 12:05:03 by jekim             #+#    #+#              #
#    Updated: 2021/05/18 13:25:59 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	= ./obj
NAME	= push_swap
RM		= rm
RMFLAG	= -rf

all:	
		cd $(OBJDIR) && make

clean:
		cd $(OBJDIR) && clean 
		
fclean:		clean
		rm -rf $(NAME)	

re:		
		fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus