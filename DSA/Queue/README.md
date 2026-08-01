# Queue

## Introduction

A queue is a FIFO (First In, First Out) data structure supporting enqueue and dequeue operations in O(1) time.

## Why This Topic Is Important

Queues underpin BFS traversal, task scheduling, and sliding window maximum problems — all common interview topics.

## Common Interview Questions

- Implement Queue using Stacks
- Sliding Window Maximum
- Number of Recent Calls
- Design Circular Queue

## Common Patterns

- BFS level-order traversal
- Monotonic deque for sliding window max/min
- Producer-consumer style simulations

## STL / Standard Library Used

`queue`, `deque` (as underlying container), `priority_queue` (for priority-based queues)

## Time Complexity Summary

Enqueue/Dequeue O(1).

## Space Complexity Summary

O(n) for storing n elements.

## Resources

- GeeksforGeeks Queue Data Structure
- BFS traversal tutorials

## Best Practices

- Use `deque` when both-end operations are needed
- Use monotonic deque for O(n) sliding window extremum problems

## Typical Mistakes

- Dequeuing from an empty queue
- Using a stack where FIFO order is actually required
- Not resizing/handling circular queue wrap-around correctly

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
