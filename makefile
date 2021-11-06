SRCS = ${wildcard *.c}
OBJES = ${SRCS:.c=.o}
NAME = libft.a
GCC = gcc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf

%.o : %.c
	   ${GCC} ${CFLAGS} -c $< -o $@
${NAME} : ${OBJES}
		${AR} $@ ${OBJES} 
all: ${NAME}

clean:
		${RM} ${OBJES}

fclean: clean
		${RM} ${OBJES}

re:	fclean all

.PHONY: all clean fclean re
