# Aim:  File this under useful information.

## Do Now: What are the different kinds of file permissions?

read | write | execute
r    |   w   |   x

Then, there's `user`, `group`, and `others`

Permissions can be represented as 3-digit binary #s, or 1-digit octal #s

100 <==> 4 => read only
111 <==> 7 => read,write,execute

* others GROUP IS NOT EVERYONE, it's others

* the d stands for "directory" when you do `ls -l`


```bash
chmod 644 broken.c
```


The information about the security and the name and other stuff is stored in the file metadata.

Things that are files:

stdin and stdout

your shell can read/write from stdio

File Table:
A list of all files being used by a program while it is running.

Contains basic information like the file's location and size.
* The file table has a limited size, which is a power of 2 and commonly 256. getdtablesize() will return this value.

* Each file is iven an integer index, starting at 0, this is referred to as the. All you di os open up the table
