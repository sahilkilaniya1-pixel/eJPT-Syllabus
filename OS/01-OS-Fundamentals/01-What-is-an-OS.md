# What is an Operating System?

An **Operating System (OS)** acts as a **Resource Manager** and an **Interface** that establishes a connection between User Applications and Hardware.

## Primary Goals:
* **Convenience:** Providing a user-friendly interface (primary focus of Desktop OS).
* **Efficiency:** Optimally utilizing hardware resources such as CPU, Memory, and I/O (primary focus of Server OS).

## Dual Mode Operation:
To maintain system security and stability, hardware supports two operation modes:
* **User Mode (Mode bit = 1):** Unprivileged instructions are executed. Direct hardware access is not allowed.
* **Kernel / Privileged Mode (Mode bit = 0):** The CPU can execute all hardware-level and sensitive instructions.