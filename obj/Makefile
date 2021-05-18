# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 13:30:27 by jekim             #+#    #+#              #
#    Updated: 2021/05/18 16:27:09 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
 
SRCDIR = ../src/
INCDIR = ../include
LIBDIR = ../libft

CCFLAG = -Wall -Wextra -Werror -I(INC_DIR)

SRCFILE = dlst/dlst1.c \
			dlst/dlst2.c \
			dlst/stack.c \
			inst/inst1.c \
			inst/inst2.c

SRCS = $(addprefix $(SRCDIR), $(SRCFILE))

SRCS := $(notdir $(SRCS))
OBJS = $(SRCS:.c=.o)

all : $(NAME)