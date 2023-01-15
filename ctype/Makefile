SRCS	=	my_ctype1.c	\
			my_ctype2.c\
			my_ctype3.c\
			my_ctype4.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	get_next_line.a

RM		=	rm -f
AR		=	ar -rcs
OUT		=	a.out
MAIN	=	main.c
HFILE	=	my_ctype.h

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all		:	$(NAME)
out		:	all
			$(CC) $(CFLAGS) $(NAME) $(MAIN) ; time ./$(OUT)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

oclean	:	fclean
			$(RM) $(OUT)

re		:	fclean all
ore		:	fclean out

norm	:	
			@norminette $(HFILE) $(SRCS)
normd	:
			@norminette -R CheckDefine $(HFILE) $(SRCS)
normf	:
			@norminette -R CheckForbiddenSourceHeader $(HFILE) $(SRCS)
commit	:	fclean
			git add .
			git commit -m "commit through Makefile"
			git log

.PHONY	:	all out clean fclean oclean re ore norm normd normf commit