# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <arabi1549@naver.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/17 18:52:45 by jekim             #+#    #+#              #
#    Updated: 2021/06/26 01:31:56 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ps_bucketnew.c	ps_dlstadd_back.c	ps_dlstadd_front.c \
					ps_dlstclear.c	ps_dlstdel_front.c	ps_dlstnew.c	\
					ps_dlstnext.c	ps_dlstpop_back.c	ps_dlstpop_front.c	\
					ps_dlstprev.c	ps_dlstswap.c	ps_dlstprint.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libps.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
