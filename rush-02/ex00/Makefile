SRCS	= src/ft_strcmp.c src/ft_strcpy.c src/ft_strncpy.c src/ft_atoi.c src/ft_file_to_str.c src/ft_isspace.c src/main.c src/ft_digits.c src/parsing.c src/ft_alpha.c src/ft_atoa.c src/ft_print.c src/ft_print2.c src/ft_utils.c src/ft_destroy.c
HEAD	= ./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

# Transformer .c en .o
.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

# convention , apl la compilation 
all:		${NAME}

# Permet d'effacer les fichier .o
clean:
			${RM} ${OBJS}

# Permet d'effacer les éxécutable 
fclean:		clean
			${RM} ${NAME}

# Force la re-compilation qui apl fclean
re:			fclean all

# Permet d'ignorer si d'autre fichier se nomme pareil 
.PHONY:		all clean fclean re