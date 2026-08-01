# Backtracking

## Introduction

Backtracking is a refined brute-force technique that incrementally builds candidates for a solution and abandons a candidate ('backtracks') as soon as it determines it cannot lead to a valid solution.

## Why This Topic Is Important

Backtracking is essential for constraint-satisfaction problems (permutations, combinations, puzzles) frequently asked in interviews.

## Common Interview Questions

- N-Queens
- Sudoku Solver
- Permutations / Combinations
- Subsets
- Word Search
- Palindrome Partitioning

## Common Patterns

- Choose → Explore → Un-choose
- Pruning invalid branches early
- State-space tree traversal

## STL / Standard Library Used

`vector` for building candidate solutions, `unordered_set`/`vector<bool>` for visited tracking.

## Time Complexity Summary

Often exponential, e.g., O(2^n) or O(n!), depending on the branching factor; pruning reduces practical runtime significantly.

## Space Complexity Summary

O(depth) for the recursion stack plus O(n) for the current candidate/state.

## Resources

- GeeksforGeeks Backtracking Algorithms
- "Competitive Programmer's Handbook" backtracking chapter

## Best Practices

- Prune branches as early as possible
- Undo state changes exactly (mirror the choose step)
- Use bitmasks for visited state when constraints allow

## Typical Mistakes

- Forgetting to undo (backtrack) state changes
- Not pruning early, causing timeouts
- Duplicate results due to missing sorting/visited checks

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
