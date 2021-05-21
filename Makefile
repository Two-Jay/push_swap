# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 12:05:03 by jekim             #+#    #+#              #
#    Updated: 2021/05/18 14:40:16 by jekim            ###   ########.fr        #
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
		cd .. && $(RM) $(RMFLAG) $(NAME)	

re:		
		fclean $(NAME)

.PHONY:			all clean fclean re