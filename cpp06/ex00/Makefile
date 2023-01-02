# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 12:24:41 by vsedat            #+#    #+#              #
#    Updated: 2022/11/07 14:57:06 by vsedat           ###   ########lyon.fr    #
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
NAME	= convert

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
HEADERS		= #./incl/Bureaucrat.hpp
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

test:
	@echo "${END}\n./convert a${GREEN}"
	./convert a
	@echo "${END}\n./convert 127${GREEN}"
	./convert 127
	@echo "${END}\n./convert 126${GREEN}"
	./convert 126
	@echo "${END}\n./convert 10${GREEN}"
	./convert 10
	@echo "${END}\n./convert 0${GREEN}"
	./convert 0
	@echo "${END}\n./convert 0.0${GREEN}"
	./convert 0.0
	@echo "${END}\n./convert nan${GREEN}"
	./convert nan
	@echo "${END}\n./convert 42.0f${GREEN}"
	./convert 42.0f
	@echo "${END}\n./convert INT_MAX${GREEN}"
	./convert 2147483647
	@echo "${END}\n./convert INT_MIN${GREEN}"
	./convert -2147483648
	@echo "${END}\n./convert INT_OVERFLOW${GREEN}"
	./convert 2147483648
	@echo "${END}\n./convert INT_UNDERFLOW${GREEN}"
	./convert -2147483649
	@echo "${END}\n./convert FLT_MAX${GREEN}"
	./convert 340282346638528859811704183484516925440.0f
	@echo "${END}\n./convert FLT_MIN${GREEN}"
	./convert -340282346638528859811704183484516925440.0000000000000000f
	@echo "${END}\n./convert FLT_OVERFLOW${GREEN}"
	./convert 340282446638528859811704183484516925455.9f
	@echo "${END}\n./convert FLT_UNDERFLOW${GREEN}"
	./convert -340282446638528859811704183484516925499.9900000000000000f
	@echo "${END}\n./convert DBL_MAX${GREEN}"
	./convert 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
	@echo "${END}\n./convert DBL_MIN${GREEN}"
	./convert -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
	@echo "${END}\n./convert DBL_OVERFLOW${GREEN}"
	./convert 179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9
	@echo "${END}\n./convert DBL_UNDERFLOW${GREEN}"
	./convert -179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9

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

.PHONY:	all clean fclean re run sus test
