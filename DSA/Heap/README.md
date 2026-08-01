# Heap

## Introduction

A heap is a complete binary tree-based structure satisfying the heap property (min-heap or max-heap), enabling O(log n) insertion and O(1) access to the min/max element.

## Why This Topic Is Important

Heaps power priority queues, Dijkstra's algorithm, top-k problems, and median-finding — all frequent interview topics.

## Common Interview Questions

- Kth Largest Element in an Array
- Merge K Sorted Lists
- Find Median from Data Stream
- Top K Frequent Elements
- Task Scheduler

## Common Patterns

- Min-heap / max-heap for top-k selection
- Two-heap technique for median maintenance
- Heap-based greedy scheduling

## STL / Standard Library Used

`priority_queue` (`std::greater<>` for min-heap), `make_heap`/`push_heap`/`pop_heap` algorithms

## Time Complexity Summary

Insert O(log n), Extract-min/max O(log n), Peek O(1).

## Space Complexity Summary

O(n) for n elements.

## Resources

- GeeksforGeeks Heap Data Structure
- CLRS Chapter 6 (Heapsort)

## Best Practices

- Use `priority_queue<T, vector<T>, greater<T>>` for a min-heap
- Consider a two-heap approach for streaming median problems

## Typical Mistakes

- Forgetting `std::priority_queue` is a max-heap by default
- Not maintaining heap size limits in top-k problems
- Using a heap when a simple sort suffices, adding unneeded complexity

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
