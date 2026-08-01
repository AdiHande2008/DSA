# Graph

## Introduction

A graph is a set of vertices connected by edges, which may be directed/undirected and weighted/unweighted. Graphs model networks, dependencies, and relationships.

## Why This Topic Is Important

Graph algorithms (BFS, DFS, shortest path, MST, topological sort) are among the most frequently tested advanced interview topics.

## Common Interview Questions

- Number of Islands
- Course Schedule (Topological Sort)
- Dijkstra's Shortest Path
- Clone Graph
- Union-Find based Connected Components
- Minimum Spanning Tree (Prim's/Kruskal's)

## Common Patterns

- BFS/DFS traversal
- Topological sort (Kahn's algorithm / DFS-based)
- Union-Find for connectivity
- Priority-queue based shortest path (Dijkstra)

## STL / Standard Library Used

`vector<vector<int>>` adjacency list, `queue`, `priority_queue`, `unordered_map`, `unordered_set`

## Time Complexity Summary

BFS/DFS: O(V + E). Dijkstra: O((V + E) log V) with a heap. Kruskal's: O(E log E).

## Space Complexity Summary

O(V + E) for adjacency list representation.

## Resources

- CP-Algorithms Graph Algorithms
- GeeksforGeeks Graph Data Structure and Algorithms
- "Introduction to Algorithms" (CLRS) Graph chapters

## Best Practices

- Prefer adjacency list over adjacency matrix for sparse graphs
- Always mark visited nodes to avoid infinite loops
- Choose the right algorithm based on weighted/unweighted and directed/undirected properties

## Typical Mistakes

- Infinite loops from missing visited checks
- Using BFS/DFS incorrectly on disconnected graphs (forgetting to iterate over all components)
- Applying Dijkstra on graphs with negative weights (should use Bellman-Ford instead)

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
