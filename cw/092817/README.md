# Aim: A String of functions

## Do Now: Write a function to return length of a string

* Even though the array is a certain size, the other part is not

* `char *s3 = "Mankind"` just points to the immutable piece of memory that holds "Mankind" 

* You can only assign char arrays with = at declaration:

```c
char s[] = "zero"; //ok
s = "seven; // NOT OK

char * s1 = "zero"; //ok!
s = "seven"; //ok!
```

1: strcat/strncat
