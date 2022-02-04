#========================================#
#=============== VARIABLES ==============#
#========================================#

#~~~~ Output ~~~~#

NAME		=		brain

#~~~~ Paths ~~~~#

VPATH		=		srcs/
PATH_OBJ	=		objs/
PATH_INC	=		includes/

#~~~~ Sources ~~~~#
 
SRCS		=		main.cpp		\
					Animal.cpp		\
					Dog.cpp			\
					Cat.cpp			\
					Brain.cpp

#~~~~ Objects ~~~~#

OBJS		=		$(addprefix $(PATH_OBJ), $(SRCS:.cpp=.o))

#~~~~ Includes ~~~~#

INCS		=		$(addprefix $(PATH_INC), Animal.hpp Dog.hpp Cat.hpp Brain.hpp)

#~~~~ Macros ~~~~#

CC			=		clang++
CFLAGS		=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -rf

#========================================#
#=============== TARGETS ================#
#========================================#

#~~~~ Main Rules ~~~~#

all :				$(NAME)

$(NAME) :			$(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -I $(PATH_INC)

re :				fclean all

#~~~~ Compilation Rules ~~~~#

$(PATH_OBJ)%.o :	%.cpp $(INCS)
					@mkdir -p $(dir $@);
					$(CC) $(CFLAGS) -c $< -o $@ -I $(PATH_INC)

#~~~~ Cleaning Rules ~~~~#

clean :
					$(RM) $(PATH_OBJ)

fclean :			clean
					$(RM) $(NAME)

.PHONY:				all clean fclean re