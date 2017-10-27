# Aim: Get Dem Bugs

More generic tool !!!

It's called gdb ("GNU Debugger") and it's pretty lit

If something weird happens (i.e. an infinite loop, it will help you debug your issue

Use the -g flag when you want to use gdb)

```bash
gdb ./a.out
```

Opens it's own shell. At this point it has not run the program yet. Run it by typing in `run`.

SIGFPE-> Floating Point Error

Tells you the specific line

If you type `list`, it will show you 5 lines before and 5 lines after.

Break point: tell gdp to break the code at a certain point (for example, `break 17` will stop at 17. You can put multiple breaks.

You can also do `break function_name`

You can also see current values

For example, `print sum` could return `$1 = -3` and `print out` could return `$2= -3)

You can also use `continue` to  move past a break.`

backtrace: show the current stack
Running a program in pieces:
* continue: run til next breakpoint
* next: next lone of the program only
* step: run the next line of the program, except it runs functions line by line aswell
