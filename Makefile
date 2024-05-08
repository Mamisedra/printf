NAME = libftprintf.a

SRCS = 	ft_check_print.c ft_check_suiv.c ft_printf.c ft_putbase.c\
	ft_putchar.c ft_puthexa_low.c ft_putnbr.c ft_put_point.c ft_putstr.c\

CC = gcc

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

RM = rm -rf

AR = ar rcs

INSC = include\ft_printf.h


.c.o :
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INSC}

${NAME} : ${OBJS}
	@${AR} ${NAME} ${OBJS}

all : ${NAME}

bonus : ${OBJS}
	@${AR} ${NAME} ${OBJS}

clean :
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY :
	all clean fclean re .c.o
