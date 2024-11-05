NAME = libftprintf.a
CC     = cc
CFLAGS = -Wall -Wextra -Werror 
FILES = ft_print_c.c ft_print_d.c ft_print_i.c ft_print_p.c ft_print_s.c ft_print_u.c ft_print_x.c ft_print_lx.c ft_printf.c ft_print_nothing.c ft_print_percent.c \
		parse_command.c options.c 
SRCS = $(addprefix src/,$(FILES)) 
SUBDIR = libft
SUBNAME = libft.a
BONUS_SRCS = 
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SUBDIR) $(OBJS)
	@make -C $(SUBDIR) all
	cp $(SUBDIR)/$(SUBNAME) $(NAME)
	ar qc $(NAME) $(OBJS)

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS) $(BONUS_OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 