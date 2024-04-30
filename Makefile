CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_atoi.c			ft_bzero.c			ft_calloc.c \
	  ft_isalnum.c		ft_isalpha.c		ft_isascii.c \
	  ft_isdigit.c		ft_isprint.c		ft_isspace.c \
	  ft_itoa.c			ft_memchr.c			ft_memcmp.c \
	  ft_memcpy.c		ft_memmove.c		ft_memset.c \
	  ft_putchar_fd.c 	ft_putendl_fd.c		ft_putnbr_base_fd.c \
	  ft_putunbr_base_fd.c					ft_putnbr_fd.c \
	  ft_putstr_fd.c	ft_putptr_fd.c		ft_split.c \
	  ft_strchr.c		ft_strdup.c			ft_striteri.c \
	  ft_strjoin.c		ft_strlcat.c		ft_strlcpy.c \
	  ft_strlen.c		ft_strmapi.c		ft_strncmp.c \
	  ft_strnstr.c		ft_strrchr.c		ft_strtrim.c \
	  ft_substr.c		ft_tolower.c		ft_toupper.c \
	  ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c \
	  ft_lstdelone.c	ft_lstiter.c		ft_lstlast.c \
	  ft_lstmap.c		ft_lstnew.c			ft_lstsize.c \
	  get_next_line.c	get_next_line_utils.c \
	  ft_printf.c		ft_abs.c			ft_arrmax.c \
	  ft_arrmin.c		ft_atoi_strict.c	ft_log_base_n.c \
	  ft_memswap.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "CREATING ARCHIVE"
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@echo "COMPILING $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "REMOVING OBJECT FILES"
	@rm -f $(OBJ)

fclean: clean
	@echo "REMOVING ARCHIVE"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
