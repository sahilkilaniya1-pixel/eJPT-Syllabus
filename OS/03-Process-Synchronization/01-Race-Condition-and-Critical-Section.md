# 1. Process Control Block (PCB) & Process Creation

* **Process:** A program in execution. It resides in an active executable state within primary memory.
* **Process Control Block (PCB):** A data structure maintained by the Operating System that holds complete state information for each process:
  * **Process State & Process ID (PID)**
  * **Program Counter (PC):** Memory address of the next instruction to execute.
  * **CPU Registers:** Accumulator, index registers, stack pointers.
  * **CPU Scheduling Info:** Priority, queue pointers.
  * **Memory Management Info:** Page tables / Segment tables.
  * **I/O & File Status:** List of open file descriptors.

## Process Creation in Unix:
* `fork()` system call creates a duplicate child process. It returns the child's PID to the parent process and `0` to the child process.
* `exec()` system call replaces the current process address space with a new binary code/program.