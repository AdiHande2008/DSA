# Union Find

## Introduction

Union-Find (Disjoint Set Union) is a data structure that tracks a set of elements partitioned into disjoint subsets, supporting near-O(1) union and find operations with path compression and union by rank.

## Why This Topic Is Important

Union-Find is essential for connectivity problems, Kruskal's MST algorithm, and cycle detection in undirected graphs.

## Common Interview Questions

- Number of Provinces
- Redundant Connection
- Accounts Merge
- Number of Islands II
- Kruskal's Minimum Spanning Tree

## Common Patterns

- Path compression during `find`
- Union by rank/size
- Cycle detection in undirected graphs

## STL / Standard Library Used

`vector<int>` for parent and rank arrays

## Time Complexity Summary

O(α(n)) amortized per operation (α = inverse Ackermann function, practically constant).

## Space Complexity Summary

O(n) for parent and rank arrays.

## Resources

- CP-Algorithms Disjoint Set Union
- GeeksforGeeks Union Find Algorithm

## Best Practices

- Always implement both path compression and union by rank/size for optimal performance
- Initialize each element as its own parent before any unions

## Typical Mistakes

- Forgetting path compression, leading to O(n) find operations
- Not handling the case where two elements are already in the same set during union

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
