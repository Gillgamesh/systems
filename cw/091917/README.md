# Aim: What's the point of it all?

## Memory Managment notes from last class


Traditionally:

You cannot do int b[x] (doesnt support variables that are a result of operations, but constants are fine)

This is only a problem with compiler allocated memory

* MUST have a fixed size set at declaration as a literal 
* THere is no le can go past the memory you needngth function
* There is no boundary checking 
* This means you can go back past the requirement
* arr is jut a reference to an area
* YOU CAN ALSO GO BACKWARDS, for example:
```C
for (i = -3; i < 5; i++) 
    printf("arr[%d: %d\n", i, arr[i]);
```

Segmentation fault (core dumped): Means program accessed memory it should not
