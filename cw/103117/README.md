# Aim: idk stat buffers or something
STAT buffer:

Must be a pointer to a struct stat.
Some of the fields include:
```c
struct stat {
    dev_t st_dev;
    ino_t st_ino;
}
```
```c
struct stat s_buff;
stat("foo", &s_buff);
```


* There is a header file called `<time.h>`
* i.e using ctime() on your time_t pointers
