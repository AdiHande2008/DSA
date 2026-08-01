# Recursion

## Introduction

Recursion is a technique where a function calls itself to solve smaller instances of the same problem, relying on a well-defined base case to terminate.

## Why This Topic Is Important

Recursion underlies backtracking, divide and conquer, tree/graph traversal, and many dynamic programming solutions. Interviewers frequently test recursive thinking.

## Common Interview Questions

- Factorial / Fibonacci
- Tower of Hanoi
- Subsets / Permutations
- Merge Sort / Quick Sort
- Flatten Nested Structures

## Common Patterns

- Base case + recursive case identification
- Divide and conquer
- Recursion with memoization (top-down DP)
- Tail recursion

## STL / Standard Library Used

Typically uses plain function calls; sometimes `vector` for accumulating results across recursive calls.

## Time Complexity Summary

Depends on branching factor and depth; often expressed via recurrence relations (e.g., T(n) = 2T(n/2) + O(n)).

## Space Complexity Summary

O(depth) for the call stack, plus any auxiliary space used per call.

## Resources

- "Introduction to Algorithms" (CLRS) recursion trees
- Recursion visualizer tools (e.g., Python Tutor)
- GeeksforGeeks Recursion

## Best Practices

- Always define a clear base case first
- Avoid redundant recomputation via memoization
- Watch stack depth for large inputs to avoid stack overflow

## Typical Mistakes

- Missing or incorrect base case causing infinite recursion
- Not reducing the problem size in each call
- Excessive stack usage for deep recursion instead of iterative alternatives

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
