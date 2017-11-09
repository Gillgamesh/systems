# Aim: Sending mixed signals


* `kill` by default sends a `SIGTERM`, not a `SIGKILL`

* `fg` = foreground.

* getpid() returns the pid

* "create core image" = memory core for program = dumped and used in edbugging environment. I.e. (core dumped)

* ctrl z = `sigtstp`
* `sigusr1` and `sigusr2` are left for the user


* `kill(<PID>, <SIGNAL>)`, returns 0 on success or -1 (errno) on failure.
* Make sure to include `<signal.h>`
* sighandler!!
* SIGKILL cannot be caught 
* static: the function can only be aclled from within the file it is defined!
* put them all in one ting (function)
* THERES A SECOND STEP: `signal(SIGNUMBER, sighandler)
