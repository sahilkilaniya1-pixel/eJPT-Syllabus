# 4. Virtual Memory & Page Replacement

## Core Concepts

| Term | Description |
| :--- | :--- |
| **Virtual Memory** | A feature that allows the execution of processes that are larger than the available physical RAM using **Demand Paging**. |
| **Page Fault** | Occurs when a requested page is not currently present in main memory (RAM), indicated by a **Valid-Invalid bit = 0**. |

---

## Page Replacement Algorithms

| Algorithm | Replacement Mechanism | Key Characteristic / Issues |
| :--- | :--- | :--- |
**FIFO** *(First In First Out)* | Replaces the page that was loaded into memory first. | 
**Belady's Anomaly:** Increasing the number of frame allocations can unexpectedly increase total Page Faults. |
**Optimal** *(OPT / MIN)* | Replaces the page that will not be used for the longest period of time in the future. | Serve as a 
**theoretical benchmark**; impossible to implement in real-time as future requests are unknown. |
**LRU** *(Least Recently Used)* | Replaces the page that has not been accessed for the longest duration in the past. | Practical, highly effective, and widely used strategy in modern systems. |