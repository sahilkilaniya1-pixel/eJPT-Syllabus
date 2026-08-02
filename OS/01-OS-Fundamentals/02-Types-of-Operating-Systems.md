# 2. Types of Operating Systems

* **Batch OS:** Similar jobs are grouped into batches and given to the CPU. There is no interactive input, and CPU idle time remains high.

* **Multiprogramming OS:** Multiple processes reside in Main Memory (RAM) simultaneously. When one process waits for I/O completion, the CPU immediately switches to another process, significantly increasing CPU utilization.

* **Multitasking / Time-Sharing OS:** A logical extension of multiprogramming. Fast context switching occurs based on a Time Quantum (CPU Slice) via Round-Robin scheduling, creating the illusion that multiple apps are running concurrently.

* **Multiprocessing OS:** Multiple CPUs (Cores) within a single system share the same memory (Parallel execution).

* **Real-Time OS (RTOS):** Operates under strict timing constraints.

* **Hard RTOS:** Missing a deadline is considered a total system failure (e.g., Missile Defense, Airbag System)..

* **Soft RTOS:** Minor delays can be tolerated (e.g., Video Streaming, Gaming).