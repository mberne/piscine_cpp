#========================================#
#=============== VARIABLES ==============#
#========================================#

#~~~~ Output ~~~~#

NAME		=		phonebook

#~~~~ Paths ~~~~#

VPATH		=		srcs/
PATH_OBJ	=		objs/
PATH_INC	=		include/

#~~~~ Sources ~~~~#
 
SRCS		=		main.cpp			\
					PhoneBook.class.cpp	\
					Contact.class.cpp

#~~~~ Objects ~~~~#

OBJS		=		$(addprefix $(PATH_OBJ), $(SRCS:.cpp=.o))

#~~~~ Includes ~~~~#

INCS		=		$(addprefix $(PATH_INC), PhoneBook.class.hpp Contact.class.hpp)

#~~~~ Macros ~~~~#

CC			=		clang++
CFLAGS		=		-Wall -Wextra -Werror
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