NAME = rush-02

SRCS = src/*.c

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.c=.o}

all:	${NAME}

${NAME} : ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
