#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main() {
    int a = 5;
    int f = fork();
    if (f) {
        int status;
        wait(&status);
    }
    else {
        a++;
    }
    printf("%d\n", a);
}

