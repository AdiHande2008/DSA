# Stack

## Introduction

A stack is a LIFO (Last In, First Out) data structure supporting push, pop, and top operations in O(1) time.

## Why This Topic Is Important

Stacks are used for parsing (balanced parentheses), backtracking, expression evaluation, and monotonic stack problems common in interviews.

## Common Interview Questions

- Valid Parentheses
- Min Stack
- Next Greater Element
- Largest Rectangle in Histogram
- Evaluate Reverse Polish Notation

## Common Patterns

- Monotonic stack (increasing/decreasing)
- Matching pairs (brackets)
- Expression evaluation (infix/postfix)

## STL / Standard Library Used

`stack`, `vector` (used as a stack), `deque` (underlying container for `stack`)

## Time Complexity Summary

Push/Pop/Top are all O(1).

## Space Complexity Summary

O(n) for storing up to n elements.

## Resources

- GeeksforGeeks Stack Data Structure
- "Monotonic Stack" pattern articles on LeetCode

## Best Practices

- Use monotonic stacks to achieve O(n) solutions for next-greater/smaller problems
- Prefer `vector` over `stack` when index access is also needed

## Typical Mistakes

- Popping from an empty stack without a check
- Forgetting to pop after use in monotonic stack problems
- Confusing stack order (LIFO) with queue order (FIFO)

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
