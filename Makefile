# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/14 09:42:11 by kabu-zee          #+#    #+#              #
#    Updated: 2024/12/14 09:42:12 by kabu-zee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CHECK = checker

SRCS =	src/instructions.c\
		src/main.c\
		utils/utils.c\
		utils/check_args.c\
		utils/t_list.c\

LIBDIR = libft
LIB = $(LIBDIR)/libft.a

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes -Ilibft -g

RM = rm -rf

all: $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIB)
	$(CC) $(OBJS) -L$(LIBDIR) -lft -o $(NAME)

$(LIB):
	make -C $(LIBDIR)

clean: 
	@${MAKE} -C ./libft fclean
	@${RM} ${OBJS}
	

fclean: clean
	@${RM} ${NAME}


re: fclean all

.PHONY: all clean fclean re $(LIB)