##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
DSRC	=	$(realpath src)/
STATES	=	$(DSRC)states/
TOOLS	=	$(DSRC)tools/
INIT	=	$(DSRC)init/
MSG	=	$(DSRC)messages/
ANIMS	=	$(DSRC)animations/
SRC     =	$(DSRC)main.c \
		$(STATES)event.c \
		$(STATES)update.c \
		$(STATES)draw.c \
		$(STATES)destroy.c \
		$(ANIMS)anim_noise.c \
		$(ANIMS)anim_impress_3d.c \
		$(ANIMS)anim_moving_squares.c \
		$(ANIMS)anim_teddy_raise.c \
		$(ANIMS)anim_teddy_disapear.c \
		$(ANIMS)anim_teddy_colors.c \
		$(INIT)init_screen.c \
		$(TOOLS)pixel.c \
		$(TOOLS)shapes.c \
		$(TOOLS)random_color.c \
		$(TOOLS)map.c \
		$(TOOLS)color.c \
		$(TOOLS)teddy.c \
		$(TOOLS)explode.c \
		$(TOOLS)circle.c \
		$(MSG)check_args.c \
		$(MSG)doc_msg.c \
		$(MSG)error_msg.c
INC	=	$(realpath include)
DLIB	=	$(realpath lib/my)/
LIB	=	my
LIBS	=	-L$(DLIB) -l$(LIB)
CFLAGS	=	-Wall -W -Wextra -I$(INC) -g
LDFLAGS	=	-l c_graph_prog -lm 
OBJ	=	$(SRC:.c=.o)
NAME	=	my_screensaver

all: $(NAME)

$(NAME):	$(OBJ)
	make -C $(DLIB)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LIBS)

clean:
	make clean -C $(DLIB)
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(DLIB)
	rm -f $(NAME)

re: fclean all
	make clean
