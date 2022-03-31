# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hzona <hzona@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 16:12:07 by hzona             #+#    #+#              #
#    Updated: 2021/10/08 12:12:52 by hzona            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEAD = libft.h

SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")

SRC_BONUS = $(shell find . -name "*_bonus.c")

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

CC = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)
	@echo "[INFO] Library [$(NAME)] created"

bonus:
	@$(CC) $(SRC_BONUS)
	@$(LIB) $(OBJ_BONUS)
	@$(RANLIB)
	@echo "[INFO] Bonus Library [$(NAME)] created"

clean:
	@$(REMOVE) $(OBJ) $(OBJ_BONUS)
	@echo "[INFO] Removed objects"

fclean: clean
	@$(REMOVE) $(NAME)
	@echo "[INFO] Library and objects removed "

re: fclean all

.PHONY: all clean fclean re
