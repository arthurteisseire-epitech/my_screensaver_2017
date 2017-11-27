##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
STATES	=	$(DSRC)states/
SRC     =	$(STATES)event.c \
		$(STATES)update.c \
		$(STATES)disp.c \
		$(DSRC)main.c \
		$(DSRC)pixel.c \
		$(DSRC)shapes.c \
		$(DSRC)tools.c \
		$(DSRC)init_animations.c \
		$(DSRC)init_game.c \
		$(DSRC)entities.c \
		$(DSRC)animations.c
INC	=	$(realpath include)
CFLAGS	=	-Wall -W -Wextra -I$(INC) -g
LDFLAGS	=	-l c_graph_prog
OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)
NAME	=	a.out

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make clean
