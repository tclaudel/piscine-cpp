# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tclaudel <tclaudel@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/06 11:53:58 by tclaudel          #+#    #+#              #
#    Updated: 2020/04/06 12:01:23 by tclaudel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE =\033[0;38;5;123m
LIGHT_PINK = \033[0;38;5;200m
PINK = \033[0;38;5;198m
DARK_BLUE = \033[1;38;5;110m
GREEN = \033[1;32;111m
LIGHT_GREEN = \033[0;38;5;121m
LIGHT_RED = \033[0;31;5;110m
FLASH_GREEN = \033[33;32m
WHITE_BOLD = \033[37m
GREY = \033[3;90m
ORANGE = \033[3;91m
YELLOW = \033[0;33m

SRCS		=	main.cpp

OBJ_NAME	=	${SRCS:.cpp=.o}

OBJ_PATH	=	obj/

OBJ			=	$(addprefix $(OBJ_PATH), $(OBJ_NAME))

NAME		=	convert

RM			=	rm -rf

HEADER		=	./

FLAGS		=	-Wall -Werror -Wextra #-fsanitize=address

all:		$(NAME) $(OBJ_PATH)

$(NAME):	$(OBJ) Makefile
		@g++ $(FLAGS) -o $(NAME) $(OBJ)
		@printf "	\033[2K\r$(DARK_BLUE)$(NAME)\t: $(LIGHT_GREEN)Updated\n\033[0m"

clean:
		${RM} ${OBJ_PATH}

e:			$(NAME)
		@./$(NAME)

$(OBJ_PATH)%.o: ./%.cpp Makefile
		@printf "\033[2K\r$(LIGHT_RED)Compiling...	\033[37m$<\033[36m \033[0m"
		@if test ! -d $(OBJ_PATH); then mkdir -p $(OBJ_PATH); fi
		@g++ $(FLAGS) -o $@ -c $< -I $(HEADER)

$(OBJ_PATH):
		@mkdir -p obj/ 2> /dev/null
		@mkdir -p obj/srcs 2> /dev/null

fclean: clean
	@${RM} ${NAME}

re:
	@$(MAKE) fclean
	@$(MAKE) all
