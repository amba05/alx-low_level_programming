# C - Dynamic libraries

## Description
Dynamic library differs from static library in various ways 
- it reduce memory used in linking by using the memory address instead of object files themselves

## Process involved in Dynamic linking 
- create the c files that needs to be linked with relevant header files(main.h)
- compile the c files to create object files using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c`
- compile all object file to create a dynamic(shared) library using `gcc *.o -shared -o libdynamic.so`
- copy the dynamic library **libdynamic.so** into the library path so it could be easily assessed and used at runtime. This can be done through the following methods;
	- """ sudo cp libdynamic.so /usr/lib      **OR**
	-     export LD_LIBRARY_PATH=:/home/vagrant/ALX_school/alx-low_level_programming/0x18-dynamic_libraries"""

- Then you can use the dynamic library to link with a normal (main.c) c-file to check if it linked

**NB** 
	- `nm` - is used to check the object files used in linking a dynamic/static library
	- `ldd` - shows the shared object of a dynamic/static library excecutable
	- **static lib** - are also called archieves and compiles the object files with `ar -rc liball.a *.o`


