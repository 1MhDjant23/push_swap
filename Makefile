# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 18:44:23 by mait-taj          #+#    #+#              #
#    Updated: 2024/05/10 20:31:28 by mait-taj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRC = swaping.c	push_swap.c rotate.c rev_rotate.c utils_swap.c algo_sorting.c\
	push_to_.c	func_for_alg.c	for_humdered.c	func_for_free.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

PRINTF = printf/libftprintf.a

$(NAME): $(OBJ)
	@echo "\n🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀 Compiling Libft 🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀\n"
	make -C libft
	@echo  "\n✅️✅️✅️✅️✅️✅️✅️✅️ Libft Compiled ✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️\n"
	@echo "\n🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀 Compiling printf 🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀\n"
	make -C printf
	@echo  "\n✅️✅️✅️✅️✅️✅️✅️✅️ printf Compiled  ✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️✅️\n"
	@echo "\n🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀 Compiling push_swap 🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀\n"
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)
	@echo  "\n🏆🤩🏆🤩🏆🤩🏆🤩 push_swap Compiled 🏆🤩🏆🤩🏆🤩🏆🤩🏆🤩🏆🤩🏆🤩🏆\n"

all: $(NAME)

clean:
	make clean -C libft
	make clean -C printf
	rm -f $(OBJ)
	@echo    "\n 🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮 Objects Cleaned 🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮\n"

fclean:	clean
	make fclean -C libft
	make fclean -C printf
	rm -f $(NAME)
	@echo    "\n🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮 EXEC Cleaned 🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮🚮\n"

re:	fclean all
