# Aim: Are your processes running? Then you should go out and catch them!

## fget() function

fgets - <stdio.h>:

* Read in from a file stream and store ikt in a string.
* `fgets(<DEST>, <BYTES>, <FILE POINTER>)`
* `fgets(s, n, f);`, reads at most n-1 characters from file stream f and stores it in s. Good for terminating null, which is added for you.

File pointer:

FILE * type, more complex than a file descriptor.
stdin is a FILE * variable. Although it uses the file table in the same way.

* `fopen()` gives you a FILE * rather than a file descriptor. Works much better with traditional files, but works really well with sockets.

* Stops at newline, end of file, or the byte limit.
* If applicable, keeps the newline character as part of the string, appends NULL after
`fgets(s, 256, stdin)` starts from where you left off.
* Don't use fget for data files!

### Downsides:

* security considerations: `gets()` doesn't limit the amount of bytes. Man page on linux says "Never us this function."
* doesn't apply format strings!
* `sscanf()` is like `scanf()` but extracts values based on a format string, followedd by variables you want to store those values.


## Processes:
Every running program is a process. A process can create subprocesses, but these are no different from regular processes.

* THREADS ARE NOT THE SAME AS PROCESSES
* "Multitasking" appears to happen because the processor switches between all the active processes quickly.
* Processes are chopped up to "atomic" instructions
* Process scheduler is complex, we won't be learning the inner workings of one.
* each entry in the /prop directory is a current pid!
* things that you own and are attached to terminal session
