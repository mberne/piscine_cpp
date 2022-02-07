#========================================#
#=============== VARIABLES ==============#
#========================================#

#~~~~ Output ~~~~#

NAME		=		forms

#~~~~ Paths ~~~~#

VPATH		=		srcs/
PATH_OBJ	=		objs/
PATH_INC	=		includes/

#~~~~ Sources ~~~~#
 
SRCS		=		main.cpp					\
					Bureaucrat.cpp				\
					Form.cpp					\
					ShrubberyCreationForm.cpp	\
					RobotomyRequestForm.cpp		\
					PresidentialPardonForm.cpp

#~~~~ Objects ~~~~#

OBJS		=		$(addprefix $(PATH_OBJ), $(SRCS:.cpp=.o))

#~~~~ Includes ~~~~#

INCS		=		$(addprefix $(PATH_INC), Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp)

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