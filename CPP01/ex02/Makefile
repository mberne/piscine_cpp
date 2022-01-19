#========================================#
#=============== VARIABLES ==============#
#========================================#

#~~~~ Output ~~~~#

NAME	=	brain

#~~~~ Sources ~~~~#
 
SRCS	=	main.cpp

#~~~~ Objects ~~~~#

OBJS	=	$(SRCS:.cpp=.o)

#~~~~ Macros ~~~~#

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

#========================================#
#=============== TARGETS ================#
#========================================#

#~~~~ Main Rules ~~~~#

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

re :		fclean all

#~~~~ Compilation Rules ~~~~#

%.o :		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

#~~~~ Cleaning Rules ~~~~#

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

.PHONY:		all clean fclean re