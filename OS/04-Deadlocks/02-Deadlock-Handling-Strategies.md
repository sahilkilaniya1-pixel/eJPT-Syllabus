# 1. Race Condition & Critical Section Problem

| Concept | Description |
| :--- | :--- |
| **Race Condition** | Occurs when multiple threads/processes modify a shared resource (variable/file) concurrently, making the final output dependent on the execution sequence, leading to non-deterministic or incorrect results. |
| **Critical Section** | The specific block of code where shared memory, files, or variables are accessed and updated. |

---

## Requirements for Critical Section Solution

| Requirement | Type | Description |
| :--- | :--- | :--- |
| **Mutual Exclusion** | Mandatory | If process $P_i$ is executing inside its Critical Section, no other process can enter the Critical Section simultaneously. |
| **Progress** | Mandatory | Processes not executing in their Critical Section cannot block other requesting processes from entering. Decision-making must not lead to infinite delay. |
| **Bounded Waiting** | Mandatory | There must be a limit on the number of times other processes can enter their Critical Sections after a process makes a request, preventing starvation. |
| **Speed Independence** | Supporting | The solution must assume no dependencies or guarantees regarding relative CPU execution speeds. |

Banker's Algorithm Core Formulas:
• Need[i][j] = Max[i][j] − Allocation[i][j]
• Allocation is approved ONLY IF Request[i] ≤ Need[i] AND Request[i] ≤ Available

