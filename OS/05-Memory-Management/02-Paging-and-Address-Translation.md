# 2. Paging System & Address Translation

| Concept | Description |
| :--- | :--- |
| **Paging Definition** | A non-contiguous memory allocation model that completely eliminates External Fragmentation. |
| **Pages & Frames** | • **Pages:** Logical Memory is divided into fixed-size blocks.<br>• **Frames:** Physical Memory is divided into blocks of the exact same size. |
| **Page Table** | A hardware Data Structure that maps/translates Page Numbers ($p$) to Frame Numbers ($f$). |
| **TLB (Translation Lookaside Buffer)** | A high-speed associative hardware cache used to speed up Page Table address translations. |

---

## Paging Formulas & Address Translations

| Metric / Translation | Formula / Structure |
| :--- | :--- |
| **Logical Address** | $\langle \text{Page Number } (p), \text{ Offset } (d) \rangle$ |
| **Physical Address** | $\langle \text{Frame Number } (f), \text{ Offset } (d) \rangle$ |
| **Number of Pages** | $\frac{\text{Virtual Address Space}}{\text{Page Size}}$ |
| **Page Table Size** | $\text{Number of Pages} \times \text{Page Table Entry (PTE) Size}$ |