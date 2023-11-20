NAME = bsq 

SRCS = src/*.c

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME} : ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
