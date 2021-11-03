SRCS = ${wildcard *.c}
OBJES = ${SRCS:.c=.o}
NAME = libft.a
GCC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

%.o : %.c
	   ${GCC} ${CFLAGS} -c $< -o $@
${NAME} : ${OBJES}
		${AR} $@ ${OBJES} 
		${RM} ${OBJES}

all: ${NAME}

clean:
		${RM} ${OBJES}

fclean: clean
		${RM} ${OBJES}

re:	fclean all

.PHONY: all clean fclean re
