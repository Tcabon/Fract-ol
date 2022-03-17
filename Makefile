NAME = fractol
NAMELIB = libft.a
MKDIR = obj
SRC = $(wildcard src/*.c)
LIBS = -L./libft/ -lft  -L./minilibx_macos/ -lmlx -framework OPENGL -framework AppKit
CFLAGS = -Wall -Wextra -Werror

OBJDIR = ./obj/
SRCDIR = ./src/
INCDIR = ./include/

INCLUDES = -I$(INCDIR)

OBJ = $(patsubst src/%.c,$(OBJDIR)%.o,$(SRC))


all: $(MKDIR) $(NAMELIB) $(NAME)

$(MKDIR):
	@mkdir $(MKDIR)
$(NAMELIB):
	@(cd libft && $(MAKE))

$(OBJDIR)%.o: $(SRCDIR)%.c
	gcc $(CFLAGS) $(INCLUDES) -o $@ -c $^

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBS)

clean:
	@(cd libft && $(MAKE) $@)
	@/bin/rm -f $(OBJ)
	@rm -rf obj

fclean: clean
	@(cd libft && $(MAKE) $@)
	/bin/rm -f $(NAME)
	@/bin/rm -rf $(OBJDIR)

re: fclean all

.PHONY: all re clean fclean
