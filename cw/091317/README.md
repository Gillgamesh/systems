# 09/13/17

## Aim: Variables are the spice of life

### DN: 
`man stdio` will show the manual page for <stdio> library. 

You can man specific pages like so:
`man 3 printf`

To use functions defined in other files, 2 things happen:

1. Check that you are using the function correctly (that the arguments and return type match the function def)

2. Link the code for the external function to your executable code (gcc can automatically link functions in standard libraries.)


However, if function doesn't exist, the warning is followed by the error because the linker can't find the function it's looking for

Function header list, checks it here, then does linking
`int main();`

`double foo (int i, char c);`

`*.h` means include headers, this lets you avoid the warnings. It is not necessary for linking


