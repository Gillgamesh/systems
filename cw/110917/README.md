# Aim: Time to make an executive decision.

## Do Now: Look up execlp and execvp
The exec family - <unistd.h>

* Replaces the current process with the new program
* `execlp()` takes the flags in the f format
* i.e. `execlp("ls", "ls", "-l", NULL);` 
* new program just uses old PID
* `execvp()` works the exact same way but just takes a `char *[]`
* Pointing to literal strings is completely fine. But it might not be useful in other cases ! ! ! 
