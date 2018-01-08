# Aim: Redirection; hw does it ... SQUIRREL

### File Redirection
Changing the usual input/output behavior of a program

Command line redirection `>` redirects stdout to a file

`cat` will open stdin 

* if you use `>>` then it will append to a file
* `2>` redirects stderr to a file, `2>>` appends
* &> redirect stdout and stderrs (&>> appends)
* `<` Redirects stdin from a file (WOAHHAHH)
* for example `bash < commands`
* `|` (pipe) redirects stdout from one command to stdin of the next
#### dup - <unistd.h>
* Duplicates an existing entry in the file table.
* `dup2(fd1, fd2)` redirects fd2 to fd1
* duplicates the behavior for d1 at fd2
* you will lose any references to the original fd2
