# Trace-System-Call-to-xv6

## Problem Statement
Add a new system call called trace.
Syntax:- int trace(int)
When called with a non-zero parameter, e.g., trace(1) , system call tracing is turned on for that
process. Each system call from that process will be printed to the console in a user-friendly format
showing:

• the process ID

• the process name

• the system call number

• the system call name

Any other processes will not have their system calls printed unless they also call trace(1).
Calling trace(0) turns tracing off for that process. System calls will no longer be printed to the
console. In all cases, the system call also returns the total number of system calls that the process
has made since it started. Hence, you can write code such as:
printf("total system calls so far = %d\n", trace(0));

## Modified Files

#### Makefile
#### proc.c
#### syscall.h
#### sysproc.c
#### proc.h
#### test.c
#### user.h
#### syscall.c
#### usys.S
