CC = cc

CFLAGS = -Wall -Wextra -Werror

ifeq ($(DEBUG), 1)
	CFLAGS += -g -DDEBUG=1
	export DEBUG
else
	CFLAGS += -DDEBUG=0
endif

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
	  get_next_line.c	ft_printf.c			ft_abs.c \
	  ft_arrmax.c		ft_arrmin.c			ft_atoi_strict.c \
	  ft_log_base_n.c	ft_memswap.c		ft_log.c \
	  ft_split_free.c	ft_min.c			ft_max.c \
	  ft_atoi_base.c	ft_atou_base.c

OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

C_GRAY = \033[1;30m
C_ORANGE = \033[0;33m
C_RED = \033[0;31m
NC = \033[0m
PREFIX = $(C_ORANGE)<$(NAME)>

all: $(NAME)

bonus: $(NAME)

list:
	@echo $(NUM_FD)

$(NAME): $(OBJ)
	@printf "$(PREFIX) $(NC)CREATING $(NAME)\n"
	@ar rcs $(NAME) $(OBJ)

-include $(DEP)

%.o: %.c
	@printf "$(PREFIX) $(C_GRAY)COMPILING $@$(NC)\n"
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	@printf "$(PREFIX) $(C_RED)REMOVING OBJECT FILES$(NC)\n"
	@rm -f $(OBJ) *.d

fclean: clean
	@printf "$(PREFIX) $(C_RED)REMOVING ARCHIVE$(NC)\n"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
