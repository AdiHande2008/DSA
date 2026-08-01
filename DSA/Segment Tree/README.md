# Segment Tree

## Introduction

A segment tree is a binary tree used for storing information about intervals, allowing range queries (sum/min/max) and point/range updates in O(log n).

## Why This Topic Is Important

Segment trees are an advanced topic tested in product-based company interviews and heavily used in competitive programming for range-query problems.

## Common Interview Questions

- Range Sum Query - Mutable
- Count of Smaller Numbers After Self
- Range Minimum Query
- Lazy Propagation based Range Update Queries

## Common Patterns

- Build/query/update recursive pattern
- Lazy propagation for range updates
- Merge sort tree variants

## STL / Standard Library Used

`vector<long long>` for the segment tree array

## Time Complexity Summary

Build O(n), Query O(log n), Update O(log n).

## Space Complexity Summary

O(4n) typically allocated for the tree array.

## Resources

- CP-Algorithms Segment Tree
- GeeksforGeeks Segment Tree

## Best Practices

- Use lazy propagation for range update + range query problems
- Size the tree array as `4 * n` to avoid out-of-bounds errors

## Typical Mistakes

- Incorrect merge logic at internal nodes
- Forgetting to propagate lazy values before recursing into children
- Off-by-one errors in range boundaries (inclusive vs exclusive)

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
