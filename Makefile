# Nombre del archivo de la biblioteca
NAME = libft.a

# Compilador a usar
CC = cc

# Flags para el compilador
CFLAGS = -Wall -Wextra -Werror

# Archivo de cabecera
HEADER = libft.h

# Archivos fuente
SOURCE =	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_itoa.c \
			ft_split.c

# Archivos fuente de bonus
SOURCE_BONUS =	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

# Creación de los archivos de objeto
OBJECTS = $(SOURCE:%.c=%.o) 

# Creación de los archivos de objeto de bonus
BONUS_OBJECTS = $(SOURCE_BONUS:%.c=%.o)

# Regla por defecto
all: $(NAME)

# Creación de la biblioteca
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

# Creación de la biblioteca con bonus
bonus: $(BONUS_OBJECTS)
	ar rcs $(NAME) $(BONUS_OBJECTS)
	ranlib $(NAME)

# Regla para la creación de los archivos de objeto
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -I ./ -o $@

# Regla para limpiar los archivos de objeto
clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

# Regla para limpiar todo
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all

# Reglas que no corresponden a archivos
.PHONY: all bonus clean fclean re
