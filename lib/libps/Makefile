# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <arabi1549@naver.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/17 18:52:45 by jekim             #+#    #+#              #
#    Updated: 2021/07/18 02:52:29 by jekim            ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

SRCS			= ps_bucketnew.c	ps_dlstadd_back.c	ps_dlstadd_front.c \
					ps_dlstclear.c	ps_dlstdel_front.c	ps_dlstnew.c	\
					ps_dlstnext.c	ps_dlstpop_back.c	ps_dlstpop_front.c	\
					ps_dlstprev.c	ps_dlstswap.c	ps_dlstprint.c	\
					ps_inst_sa.c	ps_inst_sb.c	ps_inst_ss.c	\
					ps_inst_pa.c	ps_inst_pb.c	ps_inst_ra.c	\
					ps_inst_rb.c	ps_inst_rr.c	ps_inst_rra.c	\
					ps_inst_rrb.c	ps_inst_rrr.c   ps_stack_issorted.c \
					ps_dlstfind_idx.c

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

.PHONY:			all clean fclean re bonus
