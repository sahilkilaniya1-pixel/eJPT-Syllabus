# 4. CPU Scheduling Algorithms & Formulas

## Key Scheduling Formulas

| Metric | Formula |
| :--- | :--- |
| **Turnaround Time (TAT)** | $\text{TAT} = \text{Completion Time (CT)} - \text{Arrival Time (AT)}$ |
| **Waiting Time (WT)** | $\text{WT} = \text{Turnaround Time (TAT)} - \text{Burst Time (BT)}$ |
| **Response Time (RT)** | $\text{RT} = \text{First CPU Allocation Time} - \text{Arrival Time (AT)}$ |

---

## Scheduling Algorithms Comparison

| Algorithm | Type | Working Mechanism | Pros / Key Feature | Issues & Solutions |
| :--- | :--- | :--- | :--- | :--- |
| **FCFS** *(First Come First Serve)* | Non-preemptive | Executes processes sequentially in order of arrival. | Simple to implement. | **Convoy Effect:** Long processes block smaller ones, drastically increasing average WT. |
| **SJF / SRTF** *(Shortest Job / Remaining Time First)* | SJF: Non-preemptive<br>SRTF: Preemptive | Selects process with the smallest remaining Burst Time ($BT$). | Provides minimum average waiting time (Optimal). | **Starvation:** Long processes may wait indefinitely if short processes keep arriving. |
| **Priority Scheduling** | Preemptive or Non-preemptive | Executes processes based on assigned priority levels. | Ensures critical tasks run first. | **Starvation:** Low-priority tasks stay blocked.<br>**Solution:** *Aging* (increasing priority over time). |
| **Round Robin (RR)** | Preemptive | Allocates CPU time dynamically based on a fixed Time Quantum. | Fair execution and ideal for time-sharing systems. | **Time Quantum Impact:** If set too high $\rightarrow$ acts like FCFS; if set too low $\rightarrow$ high Context Switch overhead. |
| **MLFQ** *(Multilevel Feedback Queue)* | Preemptive | Processes move dynamically across multiple priority queues based on behavior. | Best balance for mixing CPU-bound and I/O-bound tasks. | Complex queue configuration and management rules required. |