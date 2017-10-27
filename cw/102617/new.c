#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
void main() {
    umask(0000);

    int newfile = open("foo.bar",  O_CREAT , 0666);
    close(newfile);
}

