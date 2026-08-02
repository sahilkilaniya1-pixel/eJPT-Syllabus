# 3. Multitasking vs Multithreading

| Feature | Multitasking | Multithreading |
| :--- | :--- | :--- |
| **Basic Concept** | Executing multiple processes simultaneously on the CPU[cite: 1]. | Running multiple execution threads within a single process[cite: 1]. |
| **Resource Sharing** | Each process has its own isolated memory space[cite: 1]. | Threads share the same Code, Data, and Heap space[cite: 1]. |
| **Context Switching** | Slower & Heavyweight (PCB save/restore overhead)[cite: 1]. | Faster & Lightweight (low Thread Control Block overhead)[cite: 1]. |
| **Private State** | PCB, Page Tables, File Descriptors[cite: 1]. | Thread-specific Stack, Registers, and Program Counter (PC)[cite: 1]. |