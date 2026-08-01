# Prefix Sum

## Introduction

Prefix sum precomputes cumulative sums of an array so that any range-sum query can be answered in O(1) after O(n) preprocessing.

## Why This Topic Is Important

Prefix sums are foundational for range-query problems and often combine with hashing for subarray-sum problems.

## Common Interview Questions

- Range Sum Query - Immutable
- Subarray Sum Equals K
- Product of Array Except Self
- Continuous Subarray Sum

## Common Patterns

- 1D prefix sum for range sum queries
- Prefix sum + hash map for counting subarrays with a target sum
- 2D prefix sum for submatrix sum queries

## STL / Standard Library Used

`vector<long long>` for prefix arrays (watch for overflow), `unordered_map<int,int>` for sum-frequency counting

## Time Complexity Summary

O(n) preprocessing, O(1) per range query.

## Space Complexity Summary

O(n) for the prefix array.

## Resources

- GeeksforGeeks Prefix Sum Array
- CP-Algorithms Prefix Sums

## Best Practices

- Use `long long` for prefix sums to avoid overflow
- Combine with hash maps for O(n) subarray-sum-equals-target solutions

## Typical Mistakes

- Integer overflow on large sums
- Off-by-one indexing when converting between prefix array and original array indices

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
