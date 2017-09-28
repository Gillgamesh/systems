# Aim: ctrings

## Do Now: try program

Strings are char[]s

* by convention, strings end with a null character, either '' or 0 or '\0'

* String literals are immutable

* new copies are not created

* pointers just point to that literal

* declaring char s[256]: Normal array declaration, allocates 256 bytes

* null terminate ur string!

* i.e. `s[2] = 0;` if you have a 2 char string


`char [s256] = "Imagine";`, allocates 256 bytes, creates the immutable string and then copies it (including the terminating null into the array.
