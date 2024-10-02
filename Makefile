
# Compiling flags
FLAG = -Wall -Wextra -Werror

# Built program name
NAME = libft.a

# Source files (.c)
SRC = ft_isalpha.c \
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
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		

# Object files (.o)
OBJ = $(SRC:.c=.o)

# To be executed:
all: ${NAME}

# Build program from .o files
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created and idexed"

# Creation of .o files
%.o: %.c
	@gcc $(FLAG) -c $< -o $@

# Deletes .o files
clean:
	@rm -f $(OBJ)
	@echo "OBJ cleaned"

# Deletes .o files and built program.
fclean: clean
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo "All objects and executable have been removed"

#Deletes built program and builds it again:
re: fclean all

# Set key words as commands, not files, to avoid conflicts if existing files use that word as their name:
.PHONY: all clean fclean re bonus
