# event-driven-code-generator
A Python-based tool that reads structured Excel sheets and auto-generates C code for event-driven state machines. Originally developed during my internship at **DRDO – Research Centre Imarat (RCI)** to automate embedded control logic for defence systems.
# 🚀 Event-Driven State Machine Code Generator

A Python-based tool that reads structured Excel sheets and auto-generates C code for event-driven state machines. Originally developed during my internship at **DRDO – Research Centre Imarat (RCI)** to automate embedded control logic for defence systems.

---

## Features

-  Excel-based input (events, subsystems, conditions, etc.)
-  Auto-generates modular, production-ready C code
- Handles logical conditions with priority (`*and`, `**or`, etc.)
-  Validates Excel structure and logic before generation
-  Produces switch-case-based event handling code with `init()` and `interface()` support

---

##  Getting Started

###  Dependencies

- Python 3.8+
- `openpyxl` library

Install it via pip:

```bash
pip install openpyxl
