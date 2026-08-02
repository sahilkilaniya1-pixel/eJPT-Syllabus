# 6. Booting Process & 32-bit vs 64-bit Systems
## Booting Steps:
1. **POST (Power-On Self-Test):** BIOS/UEFI executes from ROM and performs basic hardware testing[cite: 1].
2. **Bootstrap Loader:** Loads the Bootloader (GRUB / Windows Boot Manager) from storage media (MBR/EFI) into RAM[cite: 1].
3. **Kernel Loading:** The Bootloader transfers the OS Kernel from Disk to RAM and hands over control[cite: 1].
4. **Init Process:** The Kernel initializes and creates the first process (e.g., `init` / `systemd` in Linux, with $PID = 1$)[cite: 1].


## 32-bit vs 64-bit Systems:
* A **32-bit** system can address a maximum of $2^{32} \text{ bytes} = 4 \text{ GB}$ of RAM[cite: 1].
* A **64-bit** system supports up to a theoretical limit of $2^{64} \text{ bytes} = 16 \text{ Exabytes}$ of RAM and performs large arithmetic operations in a single cycle due to wider registers[cite: 1].