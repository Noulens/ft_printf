CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	ft_c.c\
			ft_s.c\
			ft_p.c\
			ft_di.c\
			ft_xupx.c\
			ft_uitoa.c\
			ft_printf.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libftprintf.a		

HEADERS	=	ft_printf.h

${NAME}: ${HEADERS} ${OBJS}
	${MAKE} bonus -C ./libft
	cp libft/libft.a ${NAME}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all : ${NAME}

clean :
	${MAKE} clean -C ./libft
	rm -rf ${OBJS} *.o

fclean : clean
	${MAKE} fclean -C ./libft
	rm -rf ${NAME}

re : fclean all
