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
Paging Calculations:
• Logical Address = ⟨ Page Number (p), Offset (d) ⟩
• Physical Address = ⟨ Frame Number (f), Offset (d) ⟩
• Page Table Size = Number of Pages × Page Table Entry (PTE) Size
• Number of Pages = (Virtual Address Space) / (Page Size)


Effective Memory Access Time (EAT):
EAT = h × (c + m) + (1 − h) × (c + 2m)
Where: h = TLB Hit Ratio, c = TLB Access Time, m = Main Memory Access Time. 
