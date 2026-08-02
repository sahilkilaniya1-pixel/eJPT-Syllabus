# 3. Context Switching

| Aspect | Detail |
| :--- | :--- |
| **Definition** | The process of switching the CPU from one process to another. |
| **Save State** | The state of the currently running process is saved in its **PCB**. |
| **Restore State** | The state of the next process is restored/loaded from its **PCB**. |
| **System Overhead** | Context switching is pure OS overhead; the CPU performs no actual useful work during this transition. |
| **Performance Impact** | Hardware registers saving/loading, cache invalidation, and TLB (Translation Lookaside Buffer) flushes add significantly to its complexity and latency. |