# Aim: What's a semaphore? - To control resources ! !

```c
union semun {
    int val;
    struct semid_ds * buf;
    unsigned short * array;
    struct seminfo *__buf;
    };
```

A union is designed to hold only one value at a time from a group of potential values.

semop
* Perform an atomic semaphore operations.

`semop( <DESRIPTOR>, <OPERATION>, <AMOUNT>)`:
    * AMOUNT is the amount of semaphores you want to operate on in the semaphore set.
    * OPERATION pointer to a struct sembuf


`struct sembuf {
    short sem_op;
    short sem_num;
    short sem_flag;
};

sem_num = index you wa nt to work on. 

sem_op:
* Down(S): ANy negative number
* Up(S): Any posiitve number
* 0: Block until the semaphore reaches 0
* sem_flag: SEM_UNDO: Allow the OS to undo the given operation. Useful in the eent that a program exits before it could release a semaphore.
* IPC_NOWAIT: Instead of waiting for the semapore to be available, return an err.
