# Aim: Playing Favorites

## Do Now: Intepret a print_bytes emeethod on the board

* int is just four bytes of memory! 


```c
int x = 32;
char * p = &x;
//....go through one byte at a time
```
* It's actually stored in reverse order (by it, we mean integers):

` x = [46,1,0,0] rather than [0,0,1,46]`

* It could be reversed, depends on your definition.
* big-endian vs little-endian
* little-enidna means the least significant bytes are at the end
* big-endian = most signifcant bytes are at the end

* `wait` returns status of the child.

* WEXITSATUS: Returns 16 in byte 2. 
* evwery parent gets the inforation, gets the return value. 
* WEXITTATUS is an example of a macro,
* `waitpid(pid, status, ptions)`, waits for a specific child,  
