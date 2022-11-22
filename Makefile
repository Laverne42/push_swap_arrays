# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 11:02:45 by pmarquez          #+#    #+#              #
#    Updated: 2022/11/22 12:37:05 by pmarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

# Compilador
CC			= clang
FLAG		= -c -Wall -Wextra -Werror

# Ruta y archivo de la librería
LIB_DIR		= libft/
LIB			= libft.a

# Incluir la librería
INCLUDE		= -I include/ -I $(LIB_DIR)

# Borrado
RM			= rm -f

# Archivos .c del push_swap
SRC			= 	main.c	\
				check.c			\
				
# Creación de los .o
OBJ_SRC		= $(SRC:.c = .o)

all			: $(NAME)

# Crear los .o a partir de los .c y los directorios necesarios para ello
obj/%.o		: src/%.c
				@mkdir -p $(OBJ_DIR) $(SUB_DIR)
				$(CC) -g $(FLAG) $(INCLUDE) $< -o $@

# Ejecutar el Makefile del libft
$(LIB)		:
				@$(MAKE) -C $(LIB_DIR)
				mv $(LIB_DIR)$(LIB) .

# Compilar los .o con la librería
$(NAME)		: $(OBJ_SRC) $(LIB)
				$(CC) -o $@ $^

# Borrar los .o
clean		: 	
				$(MAKE) clean -C $(LIB_DIR)
				$(RM) $(OBJ_SRC)

# Borrar push_swap y libft.a 
fclean		: clean
				@$(MAKE) fclean -C $(LIB_DIR)
				@$(RM) $(LIB)
				@$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re