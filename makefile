SRCS_BONUS = ${shell find . -name "*.c"}
OBJES_BONUS = ${SRCS_BONUS:.c=.o}
SRCS = ${shell find . -not -name "*_bonus.c" -name "*.c" }
OBJES = ${SRCS:.c=.o}
NAME = libft.a
GCC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf

%.o : %.c
	   ${GCC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJES}
		${AR} $@ ${OBJES} 
all: ${NAME}

bonus: ${OBJES_BONUS}
	${AR} ${NAME} ${OBJES_BONUS}

clean:
		${RM} ${OBJES} ${OBJES_BONUS}

fclean: clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
