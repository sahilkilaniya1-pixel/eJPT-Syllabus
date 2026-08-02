# 5. Thrashing

| Concept | Detail |
| :--- | :--- |
| **Definition** | A situation where the system spends significantly more time continuously **Swapping Pages In and Out** of memory than executing actual application code. |
| **Root Cause** | A high **Degree of Multiprogramming**, causing the system to over-commit memory so individual processes do not receive their minimum required frames (**Working Set**). |
| **Solutions** | • Reduce the **Degree of Multiprogramming** (suspend/swap out lower-priority processes).<br>• Implement the **Working-Set Model** to track and allocate sufficient page frames for active processes. |