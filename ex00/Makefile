# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/20 10:39:13 by anastruc          #+#    #+#              #
#    Updated: 2025/01/20 11:39:08 by anastruc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Polymorhpisme
COMPIL = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98
PINK = \033[1;35m
BLUE = \033[1;36m
NC = \033[0m
HEADER = headers/colors.hpp \
		headers/Animal.hpp \
		headers/Dog.hpp \
		headers/Cat.hpp \
		headers/WrongCat.hpp \
		headers/WrongAnimal.hpp \
		
SRCS =  Animal_constructors.cpp \
		Animal_methods.cpp \
		WrongAnimal_constructors.cpp \
		WrongAnimal_methods.cpp \
		Dog_constructors.cpp \
		Dog_methods.cpp \
		Cat_constructors.cpp \
		Cat_methods.cpp \
		WrongCat_constructors.cpp \
		WrongCat_methods.cpp \
        main.cpp \
		
PSRCS = $(addprefix srcs/, $(SRCS))
OBJS = $(PSRCS:srcs/%.cpp=objs/%.o);
all : $(NAME)
objs/%.o: srcs/%.cpp $(HEADER)
		@mkdir -p objs
		@$(COMPIL) $(FLAGS) -c $< -o $@
$(NAME) : $(OBJS)
		@$(COMPIL) $(FLAGS) -o $@ $(OBJS)
		@echo "$(BLUE)\n  Prog COMPILED \n$(NC) "
clean :
	@rm -rf objs
	@echo  "$(BLUE)\n  Polymorhpisme CLEANED \n$(NC)"
fclean : clean
	@rm -rf $(NAME)
	@echo  "$(BLUE)\n  Polymorhpisme FULLY CLEANED \n$(NC)"
leak :
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)
re : fclean all
.PHONY : all clean fclean re bonus