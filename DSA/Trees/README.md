# Trees

## Introduction

Trees are hierarchical data structures consisting of nodes connected by edges, with a single root and no cycles. Binary trees are the most commonly tested variant.

## Why This Topic Is Important

Tree traversal and manipulation questions are a staple of technical interviews, testing recursion and pointer-handling skills.

## Common Interview Questions

- Inorder/Preorder/Postorder Traversal
- Level Order Traversal
- Lowest Common Ancestor
- Diameter of Binary Tree
- Serialize and Deserialize Binary Tree
- Validate Binary Search Tree

## Common Patterns

- DFS (recursive/iterative with explicit stack)
- BFS (level order with queue)
- Divide and conquer on subtrees

## STL / Standard Library Used

`queue` for BFS, custom `TreeNode` struct, `vector` for storing traversal results

## Time Complexity Summary

Most traversals run in O(n) where n is the number of nodes.

## Space Complexity Summary

O(h) for recursion stack where h is tree height; O(n) worst case for skewed trees.

## Resources

- GeeksforGeeks Tree Data Structure
- "Elements of Programming Interviews" Trees chapter

## Best Practices

- Identify whether recursive or iterative traversal fits the constraints
- Use sentinel/null checks carefully
- Consider Morris Traversal for O(1) space inorder traversal

## Typical Mistakes

- Null pointer dereference on leaf nodes
- Confusing preorder/inorder/postorder output order
- Not handling unbalanced/skewed tree edge cases

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
