# 6. Booting Process & 32-bit vs 64-bit Systems
## Booting Steps:
1. **POST (Power-On Self-Test):** BIOS/UEFI executes from ROM and performs basic hardware testing[cite: 1].
2. **Bootstrap Loader:** Loads the Bootloader (GRUB / Windows Boot Manager) from storage media (MBR/EFI) into RAM[cite: 1].
3. **Kernel Loading:** The Bootloader transfers the OS Kernel from Disk to RAM and hands over control[cite: 1].