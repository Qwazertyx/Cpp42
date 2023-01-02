# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 12:24:41 by vsedat            #+#    #+#              #
#    Updated: 2022/11/10 13:34:34 by vsedat           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

##**********##
### COLORS ###
##**********##
BLACK		= \033[1;30m
RED			= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
VIOLET		= \033[1;35m
CYAN		= \033[1;36m
WHITE		= \033[1;37m

IBLACK		= \033[40m
IRED		= \x1b[41m
IGREEN		= \x1b[42m
IYELLOW		= \x1b[43m
IBLUE		= \x1b[44m
IPURPLE		= \x1b[45m
ICYAN		= \x1b[46m
IWHITE		= \x1b[47m

END			= \033[0m
UNDERLINE	= \x1b[4m
REV			= \x1b[7m

##********##
### NAME ###
##********##
NAME	= a.out

##***************##
### COMPILATION ###
##**************###
CC		= c++#gcc #-Ofast
CFLAGS	= -Wall -Wextra -Werror -std=c++98
#-g3 -fsanitize=address #leaks -atExit -- ./name #-fsanitize=thread 
CMLX	= -framework OpenGL -framework AppKit -g -lmlx -Lmlx

##*******************##
### DIRECTORY PATHS ###
##*******************##
HEADERS		= ./incl/whatever.hpp
MLX			= ./mlx
OBJ_PATH	= ./objs
SRC_PATH	= ./srcs

##***********##
### OBJECTS ###
##***********##
SRCS = $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJS = $(addprefix $(OBJ_PATH)/,$(SOURCES:.cpp=.o))

##****************##
### SOURCE FILES ###
##****************##
SOURCES	=	main.cpp		\

##*********##
### RULES ###
##*********##
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp $(HEADERS) Makefile
			@mkdir -p objs
			@echo "$(BLUE)Compiling:$(END)$(CYAN) $<"
			@${CC} ${CFLAGS} -c $< -o $@
			
all:	${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			@echo "$(GREEN)$(REV)Successful compilation with flags :$(YELLOW) ${CFLAGS} $(END)"

clean:
		@rm -f ${OBJS}
		@echo "$(BLUE)$(REV)Object files cleaned$(DEF_COLOR)"

fclean:	clean
		@rm -f ${NAME}
		@echo "$(GREEN)$(REV)Executable files cleaned$(END)"

re:	fclean
	@${MAKE} all
	@echo "$(VIOLET)$(REV)Cleaned and rebuilt everything$(END)"

run:	all
	./$(NAME)

sus:
	@echo "$(IRED)           ⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀        $(END)"
	@echo "$(IRED)        ⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀     $(END)"
	@echo "$(IRED)        ⣼⣿⠋       ⢀⣀⣀⠈⢻⣿⣿⡄    $(END)"
	@echo "$(IRED)       ⣸⣿⡏   ⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄   $(END)"
	@echo "$(IRED)       ⣿⣿⠁  ⢰⣿⣿⣯⠁       ⠈⠙⢿⣷⡄ $(END)"
	@echo "$(IRED)  ⣀⣤⣴⣶⣶⣿⡟   ⢸⣿⣿⣿⣆          ⣿⣷ $(END)"
	@echo "$(IRED) ⢰⣿⡟⠋⠉⣹⣿⡇   ⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿ $(END)"
	@echo "$(IRED) ⢸⣿⡇  ⣿⣿⡇    ⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃ $(END)"
	@echo "$(IRED) ⣸⣿⡇  ⣿⣿⡇     ⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿⡇  $(END)"
	@echo "$(IRED) ⠸⣿⣧⡀ ⣿⣿⡇                ⣿⣿⠃  $(END)"
	@echo "$(IRED)  ⠛⢿⣿⣿⣿⣿⣇     ⣰⣿⣿⣷⣶⣶⣶⣶⠶ ⢠⣿⣿   $(END)"
	@echo "$(IRED)       ⣿⣿     ⣿⣿⡇ ⣽⣿⡏⠁  ⢸⣿⡇   $(END)"
	@echo "$(IRED)       ⣿⣿     ⣿⣿⡇ ⢹⣿⡆   ⣸⣿⠇   $(END)"
	@echo "$(IRED)       ⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁ ⠈⠻⣿⣿⣿⣿⡿⠏    $(END)"
	@echo "$(IRED)       ⠈⠛⠻⠿⠿⠿⠿⠋⠁              $(END)"

.PHONY:	all clean fclean re run sus
