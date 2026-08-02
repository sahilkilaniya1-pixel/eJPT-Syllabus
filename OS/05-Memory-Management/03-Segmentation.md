# 3. Segmentation

| Concept | Details & Functionality |
| :--- | :--- |
**Definition** | A variable-size memory partitioning scheme structured according to the user's view (e.g., Code, Data, Stack, and Function blocks).
**Segment Table** | Stores two key parameters for each segment:
**Base Address:** The starting physical address of the segment in memory.
**Limit:** The legal length/size of the segment.
**Memory Protection** | Evaluates address access via condition: Offset \Limit
• If condition is true, the OS raises a **Segmentation Fault (Trap)**. |