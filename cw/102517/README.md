# Aim: Opening

# do NOw: Look up functions

open(): takes char * as input, 
close(): allow file descriptor to be freed up for other files

File Table:
getdtablesize()

* `open()` returns file descriptor, else returns -1.
* To specifically find ou t what went wrong, you can use the value of `errno`
* open is in <fnctl.h> 
* errno can be found in errno.h.
* You can do `strerror()` 
* Only need to use `mode` in `open(<PATH>, <FLAGS>, <MODE>)` when creating a new file
... You can use these keywords: `[O_RDONLY, OWRONLY, O_RDWR, O_APPEND, O_TRUNC, O_CREAT, O_EXCL]`
... `O_EXCL` 
* You can combine keywords using bitwise OR operator

