# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 11:35:03 by malouvar          #+#    #+#              #
#    Updated: 2022/01/05 11:16:22 by malouvar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = push_swap.c \
       errors.c \
	   errors2.c \
	   utils.c \
	   utils2.c \
	   rules.c \
	   rules2.c \
	   rules3.c \
	   print_list.c \
	   sort_radix.c \
	   sort_3_4_5.c

OBJS = ${SRCS:.c=.o}

CC			= gcc

FLAGS		= -Wall -Wextra -Werror

INCLUDES	= -I ./includes/ -I ./libft/includes/

RM			= rm -rf

NAME = push_swap

.c.o:
				@${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
					@${MAKE} -C libft
					@echo "push_swap : libft compiled."
					@${CC} -g ${FLAGS} -o ${NAME} ${OBJS} libft/libft.a
					@echo "push_swap : compiled."

clean:		
			@${MAKE} -C libft clean
			@${RM} ${OBJS}
			@echo "push_swap : \".o\" files were erased"

fclean:		clean
			@${MAKE} -C libft fclean
			@${RM} ${NAME}
			@echo "push_swap : \".o\" and executables were erased"

re:			fclean all

.PHONY:		clean fclean re all
