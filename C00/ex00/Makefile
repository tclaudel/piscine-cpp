# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/17 14:53:35 by tclaudel          #+#    #+#              #
#    Updated: 2020/03/17 16:06:06 by tclaudel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	megaphone.cpp

GPP			=	g++

NAME		=	megaphone

HEADER		=	./

FLAGS		=	-Wall -Werror -Wextra -fsanitize=address

all:		$(NAME)

$(NAME): $(SRCS) Makefile
			$(GPP) $(SRCS) -o $(NAME)