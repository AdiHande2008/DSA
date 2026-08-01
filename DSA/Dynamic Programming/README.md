# Dynamic Programming

## Introduction

Dynamic Programming (DP) solves problems by breaking them into overlapping subproblems and storing results to avoid recomputation, using either memoization (top-down) or tabulation (bottom-up).

## Why This Topic Is Important

DP is one of the most heavily tested topics in SDE interviews, especially at product-based companies, since it tests optimization thinking.

## Common Interview Questions

- 0/1 Knapsack
- Longest Common Subsequence
- Longest Increasing Subsequence
- Coin Change
- Edit Distance
- House Robber

## Common Patterns

- Identify overlapping subproblems and optimal substructure
- Top-down memoization vs bottom-up tabulation
- State-space reduction (rolling array optimization)
- DP on subsets (bitmask DP)

## STL / Standard Library Used

`vector<vector<int>>` for 2D DP tables, `unordered_map` for sparse memoization

## Time Complexity Summary

Typically O(n × m) or O(n²) depending on state dimensions.

## Space Complexity Summary

O(n × m) for tabulation; can often be optimized to O(n) or O(1) with rolling arrays.

## Resources

- "Competitive Programmer's Handbook" DP chapter
- GeeksforGeeks Dynamic Programming
- NeetCode DP playlist

## Best Practices

- Always define the DP state clearly before coding
- Start with a recursive brute force, then add memoization
- Optimize space complexity after establishing correctness

## Typical Mistakes

- Incorrect state definition leading to wrong recurrence
- Not initializing base cases correctly
- Confusing subsequence vs substring/subarray requirements

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
