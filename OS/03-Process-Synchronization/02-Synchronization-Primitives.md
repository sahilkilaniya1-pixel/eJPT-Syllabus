# 2. Process State Lifecycle

[ New ]--->[ Ready ]--->[ Running ]--->[ Terminated ]
                |                             |
                | [ Waiting / Blocked ]     <--

## Process States:
* **New:** The process is being created/launched[cite: 1].
* **Ready:** Resides in RAM, waiting for CPU allocation (managed by the Long-Term Scheduler)[cite: 1].
* **Running:** Instructions are currently executing on the CPU (allocated by the Short-Term Scheduler)[cite: 1].
* **Waiting / Blocked:** Waiting for an I/O event, completion, or signal[cite: 1].
* **Terminated:** Program execution is complete, and resources are released[cite: 1].

## Suspended States:
When RAM becomes full, the **Medium-Term Scheduler** moves processes to the Secondary Disk (Swap Out), placing them into **Suspended Ready** or **Suspended Waiting** states[cite: 1].