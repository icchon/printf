NAME = libftprintf.a
CC     = cc
INCDIR = 
CFLAGS = -Wall -Wextra -Werror 
SPEC_FILES = ft_create_c.c ft_create_d.c ft_create_i.c ft_create_p.c ft_create_s.c ft_create_u.c ft_create_sx.c ft_create_lx.c ft_create_nothing.c ft_create_percent.c 
UTIL_FILES := block_util.c init_util.c options_util.c processing_util1.c processing_util2.c 
SPEC_SRCS = $(addprefix src/spec_funcs/,$(SPEC_FILES)) 
UTIL_SRCS := $(addprefix src/utils/,$(UTIL_FILES)) 
SRCS =  $(SPEC_SRCS) $(UTIL_SRCS) src/ft_printf.c 
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

bonus : all

re: fclean all

.PHONY: all clean fclean re bonus 