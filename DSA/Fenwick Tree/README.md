# Fenwick Tree

## Introduction

A Fenwick Tree (Binary Indexed Tree) supports prefix-sum queries and point updates in O(log n) time using a compact array representation.

## Why This Topic Is Important

Fenwick trees are a simpler, more memory-efficient alternative to segment trees for prefix-sum style problems, often tested in advanced interviews.

## Common Interview Questions

- Range Sum Query - Mutable
- Count of Smaller Numbers After Self
- Count Inversions in an Array

## Common Patterns

- Point update, prefix-sum query
- Range update via difference array + BIT
- 2D BIT for matrix range queries

## STL / Standard Library Used

`vector<long long>` for the BIT array

## Time Complexity Summary

Update O(log n), Prefix Query O(log n).

## Space Complexity Summary

O(n).

## Resources

- CP-Algorithms Fenwick Tree
- Topcoder Binary Indexed Trees tutorial

## Best Practices

- Use 1-indexed arrays internally to simplify the `lowbit` (`x & -x`) logic
- Prefer Fenwick tree over segment tree when only prefix-sum/point-update is needed (simpler, less memory)

## Typical Mistakes

- Using 0-indexing directly without adjustment (BIT relies on 1-indexing)
- Confusing point-update-range-query with range-update-point-query variants

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
