# Binary Search

## Introduction

Binary search is a divide-and-conquer technique for finding a target (or a boundary condition) in a sorted search space in O(log n) time.

## Why This Topic Is Important

Binary search extends beyond arrays to 'binary search on answer' problems, a favorite category in interviews and contests.

## Common Interview Questions

- Binary Search (basic)
- Search in Rotated Sorted Array
- Find Peak Element
- Median of Two Sorted Arrays
- Koko Eating Bananas (binary search on answer)

## Common Patterns

- Standard binary search on a sorted array
- Binary search on answer space (monotonic predicate)
- Lower bound / upper bound search

## STL / Standard Library Used

`algorithm` (`lower_bound`, `upper_bound`, `binary_search`)

## Time Complexity Summary

O(log n) per search.

## Space Complexity Summary

O(1) for iterative implementation; O(log n) for recursive due to call stack.

## Resources

- GeeksforGeeks Binary Search
- "Competitive Programmer's Handbook" Binary Search chapter

## Best Practices

- Always define a clear monotonic predicate for 'binary search on answer' problems
- Prefer iterative binary search to avoid recursion overhead

## Typical Mistakes

- Incorrect midpoint calculation causing overflow (`(l+r)/2` vs `l + (r-l)/2`)
- Infinite loops from incorrect boundary updates
- Off-by-one errors distinguishing `<=` vs `<` conditions

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
