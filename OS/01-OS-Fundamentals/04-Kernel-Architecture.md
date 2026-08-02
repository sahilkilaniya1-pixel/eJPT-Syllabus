# 4. OS Kernel Architecture

## Monolithic Kernel
All major services (Process, File System, Memory, Device Drivers) run in a single address space in Kernel mode[cite: 1].
* **Pros:** Fast execution / Low Inter-Process Communication (IPC) overhead[cite: 1].
* **Cons:** If a single driver crashes, the entire system crashes (e.g., Linux, Traditional Unix)[cite: 1].

## Microkernel
Minimum core services (Basic IPC, Thread Scheduling, Basic Memory) reside in Kernel mode[cite: 1]. The remaining services (Device Drivers, File Systems) run in User Space[cite: 1].
* **Pros:** High stability, modular design[cite: 1].
* **Cons:** Slower performance due to Inter-Process Communication (IPC) overhead (e.g., QNX, Mach)[cite: 1].