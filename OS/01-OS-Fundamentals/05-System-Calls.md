# 5. System Calls

When user-space applications request hardware access or privileged operations, **System Calls** are used[cite: 1]. They generate a **Software Interrupt (Trap)** that switches the mode bit from `1` to `0`[cite: 1].

$$\text{User Application} \xrightarrow{\text{System Call}} \text{Trap (Switch to Kernel Mode)} \rightarrow \text{Kernel Execution} \rightarrow \text{Return Result}$$[cite: 1]

## Categories of System Calls
* **Process Control:** `fork()`, `exec()`, `exit()`, `wait()`[cite: 1]
* **File Management:** `open()`, `read()`, `write()`, `close()`[cite: 1]
* **Device Management:** `read()`, `write()`, `ioctl()`[cite: 1]
* **Information & Communication:** `getpid()`, `pipe()`, `shmget()`, `socket()`[cite: 1]