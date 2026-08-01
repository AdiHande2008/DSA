# Linked List

## Introduction

A linked list is a linear data structure where elements (nodes) are linked using pointers. Variants include singly, doubly, and circular linked lists.

## Why This Topic Is Important

Linked lists test pointer manipulation skills and are a classic interview topic for testing careful, bug-free code under edge cases (empty list, single node, cycles).

## Common Interview Questions

- Reverse a Linked List
- Detect Cycle (Floyd's algorithm)
- Merge Two Sorted Lists
- Remove Nth Node From End
- LRU Cache
- Add Two Numbers

## Common Patterns

- Fast and slow pointers
- Dummy head node technique
- In-place reversal
- Recursion on lists

## STL / Standard Library Used

`list` (doubly linked list container); custom `Node` structs are typically hand-implemented for interviews.

## Time Complexity Summary

Access O(n), Search O(n), Insert/Delete O(1) given a pointer to the node.

## Space Complexity Summary

O(n) for n nodes; O(1) extra for most in-place operations.

## Resources

- GeeksforGeeks Linked List Data Structure
- "Cracking the Coding Interview" Linked Lists chapter

## Best Practices

- Use a dummy node to simplify edge cases
- Always check for null pointers before dereferencing
- Draw the list on paper/whiteboard before coding

## Typical Mistakes

- Losing reference to the head/next node during reversal
- Not handling empty list or single-node edge cases
- Memory leaks from not freeing deleted nodes

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
