# Two Pointers

## Introduction

The two-pointer technique uses two indices moving through a data structure (often from both ends or at different speeds) to solve problems in O(n) instead of O(n²).

## Why This Topic Is Important

It is one of the most common patterns for array and string problems in interviews, often combined with sorting.

## Common Interview Questions

- Two Sum II (sorted array)
- 3Sum
- Container With Most Water
- Remove Duplicates from Sorted Array
- Valid Palindrome

## Common Patterns

- Opposite-direction pointers (start and end converge)
- Same-direction pointers (fast and slow)
- Pointer pair combined with sorting for sum-based problems

## STL / Standard Library Used

`vector`, `algorithm::sort`

## Time Complexity Summary

O(n) after sorting (if required, sorting itself is O(n log n)).

## Space Complexity Summary

O(1) extra space typically.

## Resources

- GeeksforGeeks Two Pointer Technique
- NeetCode Two Pointers playlist

## Best Practices

- Sort input first when order doesn't matter and sum/comparison logic is involved
- Move the pointer that can most plausibly improve the result

## Typical Mistakes

- Moving both pointers simultaneously when only one should move
- Not handling duplicate values causing repeated results
- Off-by-one boundary errors when pointers cross

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
