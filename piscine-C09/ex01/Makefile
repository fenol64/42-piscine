SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = ${SRCS:.c=.o}

NAME= libft.a

FLAGS = -Wall -Wextra -Werror

.c.o:
	cc -I ./includes/ -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} 
	cc ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
	
	
re:	fclean all
