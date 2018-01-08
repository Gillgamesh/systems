# Aim: Wait for it

Two forks: 4 processes.

* Child gets the value of 0, parent gets the pid
* When a process has ended, it's PID becomes 1
* It gets called an orphan process
* THREAD shares memory space
* Main process runs, and at some point you need extra work to be done. The child process can do that project.
* To deal with terminal confsion, there is the wait function. It stops a parent process from runnin\g until any child has provided status information to the parent via a signal.

* `wait(int *status)`: parameter status is used to store information about how the process exited. (SIGCHILD) signal
