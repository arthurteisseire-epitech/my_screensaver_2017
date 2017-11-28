##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
STATES	=	$(DSRC)states/
DRAW	=	$(DSRC)draw/
TOOLS	=	$(DSRC)tools/
INIT	=	$(DSRC)init/
MSG	=	$(DSRC)messages/
SRC     =	$(DSRC)main.c \
		$(STATES)event.c \
		$(STATES)update.c \
		$(STATES)disp.c \
		$(DRAW)animations.c \
		$(DRAW)entities.c \
		$(DRAW)spritesheets.c \
		$(INIT)init_animations.c \
		$(INIT)init_entities.c \
		$(INIT)init_screen.c \
		$(INIT)init_textures.c \
		$(TOOLS)pixel.c \
		$(TOOLS)shapes.c \
		$(TOOLS)tools.c \
		$(MSG)check_args.c \
		$(MSG)doc_msg.c \
		$(MSG)error_msg.c \
		$(MSG)my_puterror.c \
		$(MSG)my_putstr.c \
		$(MSG)my_strlen.c
INC	=	$(realpath include)
CFLAGS	=	-Wall -W -Wextra -I$(INC) -g
LDFLAGS	=	-l c_graph_prog
OBJ	=	$(SRC:.c=.o)
NAME	=	my_screensaver

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
