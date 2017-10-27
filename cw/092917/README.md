# Aim: idek

`strncpy(s,'hello',3)`, should be related to src and not destination 

You would use it mainly in the way:

`strncpy(s,'hello',sizeof(s))`


For ultimate safety, do:

`strncpy(s,"hello",sizeof(s)-1); s[sizeof(s)-1] = 0;`


strcat replaces null of first with the 2nd


for strncat, do `(s1,s2, sizeof(s1)-strlen(s2));`


`strcmp()` works very similar to that of Java, value is not garunteed and differs from implementation
