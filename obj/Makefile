# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 13:30:27 by jekim             #+#    #+#              #
#    Updated: 2021/05/22 21:07:31 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
 
SRCDIR = ../src/
INCDIR = ../include
LIBDIR = ../libft

CCFLAG = -Wall -Wextra -Werror -I(INC_DIR)

SRCFILE = push_swap.c	\
			dlst/dlst1.c \
			dlst/dlst2.c \
			dlst/stack.c \
			inst/inst1.c \
			inst/inst2.c \
			inst/inst3.c \
			vld/validate.c \
			

SRCS = $(addprefix $(SRCDIR), $(SRCFILE))

SRCS := $(notdir $(SRCS))
OBJS = $(SRCS:.c=.o)

all : $(NAME)