#include <stdio.h>

int main() {

    while (1) {
        printf("hello, I'm %d\n", getpid() );
        sleep(1);
    }
}
