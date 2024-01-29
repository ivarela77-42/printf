# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanrodr <ivanrodr@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 09:27:02 by ivanrodr          #+#    #+#              #
#    Updated: 2024/01/13 11:05:48 by ivanrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  Nombre de la libreria
NAME     = libftprintf.a

# Carpetas
SRC_DIR  = src
OBJ_DIR  = obj

# Compilador
CC       = gcc
CFLAGS   = -Wall -Wextra -Werror
INCLUDES = -I./includes
RM       = rm -f

# Archivos fuente
SRC_FILES       = $(shell find $(SRC_DIR) -name '*.c')
OBJ_FILES       = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Reglas
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJ_FILES) $(BONUS_OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re