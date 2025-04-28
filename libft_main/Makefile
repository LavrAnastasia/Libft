CFLAGS = -Wall -Wextra -Werror
CC = cc 
NAME = libft.a
SRCS = \
ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_strlen.c ft_strlcpy.c ft_atoi.c\
ft_strdup.c \

BONUS_SRCS = \

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

AR = ar rcs 
RM = rm -f 

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(NAME) $^
%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: all $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)
clean:
		$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
		$(RM) $(NAME)
		
re: fclean all

.PHONY : all clean fclean re bonus