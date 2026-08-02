4. OS Kernel Architecture
Monolithic Kernel: Saari major services (Process, File System, Memory, Device Drivers) ek hi address space
mein Kernel mode par run hoti hain.
Pros: Fast execution / Low IPC overhead. Cons: Ek driver crash hone se poora system crash ho jata hai (e.g.,
Linux, Traditional Unix).
Microkernel: Minimum core services (Basic Inter-Process Communication, Thread Scheduling, Basic Memory)
Kernel mode mein hoti hain. Rest services (Device Drivers, File Systems) User Space mein run hoti hain.
Pros: High stability, modular design. Cons: Inter-Process Communication (IPC) overhead ke karan slow
performance (e.g., QNX, Mach).
