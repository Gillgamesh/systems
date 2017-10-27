# Aim: Read your writes!

## Do Now: Write a c program that creates a new file. Give the file read & write permissions to each permission area.

umask - <sys/stat.j>

... Set the file permission mask.
... By default, created files are not given the exact permissions provided. Some permissions are automatically shut off.

* umask applied in the following way:

```c
new_permissions = ~mask & mode
```

Where ~mask is the negation of 

define the umask using `umask(0000)`


* stdout is just a stream (think about a pipe). The shell typically doesnt print until without a newline, which "flushes"

* `read(fd, buff, n)` reads however many bytes out from file

* When you getdbytes(), they are put into the buffer. Will return the number of bytes actually read.

* ctrl d will send "end of file character" to stop using stuff.

* Reurns -1 and sets errno if unsuccessful.

* `write(fd, buff, n)` has the same methods, write n bytes from buffer into fd's file. `O_APPEND` vs. `O_TRUNC` is very important

* Just remember that you don't have to write chars. Since you're just writing bytes you can just write int[]s if u want.
