# C - Makefiles

## Note
The C-Makefiles ease the means of running and compiling numerous files/program. This is done by using the `make` command on the Make file. 
	E.g: `make -f 0-makefile`


` .PHONY: all clean oclean fclean re

CC = gcc  
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = school
CFLAGS = -Wall -Werror -Wextra -pedantic

**target($@)**: **pre-requsite($<)**

all: m.h $(OBJ)
        $(CC) $(OBJ) -o $(NAME)

clean:
        $(RM) *~ $(NAME)

oclean:
        $(RM) $(OBJ)

fclean: clean oclean

re: oclean all`


## Resources
- [Makefiles](https://opensource.com/article/18/8/what-how-makefile)

