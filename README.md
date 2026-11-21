# Treasure Hunt Adventure

A C++ console adventure game where you explore a dangerous cave system, manage your health and gold through random events, and try to survive and escape with your loot.

## Gameplay & Actions
Starting with **100 health** and **0 gold**, each turn lets you choose one of three actions (with input validation for choices outside `1–3`):
1. **Search for gold:** Finds `5–15` gold while risking `3–8` health damage.
2. **Fight a monster:** Costs `10–30` health, with a `30%` chance to find `10–20` bonus gold.
3. **Rest:** Recovers `5–15` health, capped at a maximum of `100` health.

After each round, if your health is still above `0`, you can choose whether to keep exploring (`y`/`Y`) or end the run and see your final health and gold totals.

## Compiling & Running
Compile with `g++` (C++17) and run from the terminal:

```bash
g++ -std=c++17 -Wall -Wextra treasure_hunt.cpp -o treasure_hunt
./treasure_hunt
