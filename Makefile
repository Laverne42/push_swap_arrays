# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 11:02:45 by pmarquez          #+#    #+#              #
#    Updated: 2022/11/30 11:39:03 by pmarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= main.c check.c swap.c rotate.c

OBJ_SRC		= $(SRC:.c = .o)

INC			= libft/

LIB			= libft.a

EXEC		= push_swap

CC			= GCC

CFLAGS		= -Wall -Werror -Wextra

all			: $(EXEC)

$(NAME)		: all

$(LIB)		:
	make -C $(INC)

$(EXEC):	$(LIB)	$(OBJ_SRC)
	$(CC)	$(CFLAGS)	$(OBJ_SRC) -o $(EXEC) $(INC)$(LIB)

clean		:
	rm -f $(EXEC)
	make -C libft fclean

re			: fclean all

.PHONY		: all clean fclean re