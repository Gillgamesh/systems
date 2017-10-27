# Aim: Back to the grind

### Valgrind
Tool for debugging memory issues in C programs.
You must compile with -g in order to use valgrind (and similar tools)
```bash
gcc -g foo.c
```

Usage:

```bash
Valgrind --leak-check=yes ./a.out
```
Program still runs

SIGSEGV = signal 11, 

```c

char * s = "cool";
strcat(s, " woo !");

