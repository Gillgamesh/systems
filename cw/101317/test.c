#include <stdio.h>
#include <stdlib.h>
void main() {

    char * foo = calloc(1024,8); //allocates 1024*8 bytes, makes them null
    printf("First 10 chars in foo:\n");
    int i;
    for (i = 0; i < 10.; i++) {
        printf("%c\n", foo[i]);
    }
    printf("Pointer to foo: %p\n", foo);

    //REALLOC TIME:
    size_t foot = 1024*1024*1024L*10;
    foo = realloc(foo, foot);
    printf("Pointer to foo: %p\n", foo);
    i = 0;
    while (!foo[i]) {
        foo[i] = 'a';
        foo++;
    };
    printf("Approximte length of foo: %d\n", i);
    printf("ctrl c to exit\n");
    while (1);
}
