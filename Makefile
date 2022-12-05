# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarquez <pmarquez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 11:02:45 by pmarquez          #+#    #+#              #
#    Updated: 2022/12/05 08:49:44 by pmarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 		= main.c check.c swap.c rotate.c push.c

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