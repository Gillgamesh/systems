#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const *  char* argv[]) {
    char * s[2] = {new, NULL};
    execvp("a.out", argv);
    printf("%s", new);
}
