# Binary Search Tree

## Introduction

A Binary Search Tree (BST) is a binary tree where the left subtree contains only nodes with values less than the parent, and the right subtree only greater, enabling O(log n) operations on average.

## Why This Topic Is Important

BSTs test understanding of ordering invariants and are the basis for balanced tree structures like AVL and Red-Black trees used in real-world systems.

## Common Interview Questions

- Validate BST
- Insert/Delete in BST
- Kth Smallest Element in BST
- Lowest Common Ancestor in BST
- Convert Sorted Array to BST

## Common Patterns

- Inorder traversal yields sorted order
- Recursive insert/search/delete respecting BST invariant
- Range-based pruning during search

## STL / Standard Library Used

`set`/`map` (self-balancing BSTs internally, usually Red-Black trees)

## Time Complexity Summary

O(log n) average for search/insert/delete; O(n) worst case for a skewed (unbalanced) BST.

## Space Complexity Summary

O(n) for n nodes; O(h) recursion stack.

## Resources

- GeeksforGeeks Binary Search Tree
- CLRS Chapter 12 (Binary Search Trees)

## Best Practices

- Use `set`/`map` when a balanced BST behavior is needed without implementing one manually
- Always maintain BST invariant after insert/delete

## Typical Mistakes

- Forgetting to update parent pointers/links after deletion
- Not handling duplicate values consistently
- Assuming BST is always balanced (it is not, without self-balancing logic)

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
