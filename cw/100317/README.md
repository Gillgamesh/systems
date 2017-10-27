# Aim: Make it so

## Seperate Compilation

You can combine multiple c programs by including them all in one gcc command.

i.e.
```bash
gcc test.c string.c foo.c woohoo.c
```

Different from Java compiler, which creates seperate class files. Each one could be run if it has a main method


YOU CANNOT have duplicate function or global variable names across these files

Biggest offender: multiple main methods. THere must be a main method in order to create an executable program BUT you can't have multiple main funcions.

Each file gets checked individually, turned into machinecode, linker grabs any executable code in main, and links any functions that are used in main in order.

When you develop a library with .c and .h combination, NEVER put the main in there so the program can compile.
You can run it through the compiler with:

```bash
gcc -c
```

Only compile, do not create an executable file/program. Lets you check for syntax

For nonexutables, default extension is ".o"

You can do:

```bash
gcc ayy.o lmao.o
```


### Make

Create compiling instuctions and setup dependencies

Standard name for the file is makefile

syntax:

<TARGET>: <DEPENDENCIES>
TAB<RULES>


Example:

```
strtest: dwstring.o main.o
    gcc -o strtest dwstring.o main.o

dwstring.o: dwstring,c dwstring.h
    gcc -c dwstring.c
main.o: main.c dwstring.h
    gcc -c main.c

clean:
    rm *.o
    rm *~
run: all
./strtest
```

If your 

Since dwstring.c #includes dwstring.h, you need not worry about that


```
make target
```
Will do  just that target, i.e. `make main.o`

If you do `mkae clean`, it will run with clean

`run` is not in dependency tree, because nothing else needs it.
