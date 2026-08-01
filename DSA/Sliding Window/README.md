# Sliding Window

## Introduction

The sliding window technique maintains a window (subarray/substring) over the input, expanding and shrinking it to satisfy a condition, avoiding recomputation from scratch.

## Why This Topic Is Important

Sliding window converts O(n²) brute-force scans into O(n) solutions, a frequently tested optimization pattern.

## Common Interview Questions

- Longest Substring Without Repeating Characters
- Minimum Window Substring
- Maximum Sum Subarray of Size K
- Longest Repeating Character Replacement

## Common Patterns

- Fixed-size window
- Variable-size window (expand/shrink based on condition)
- Two-pointer window boundaries

## STL / Standard Library Used

`unordered_map<char,int>` for frequency counts, `deque` for monotonic windows

## Time Complexity Summary

O(n) since each element is added/removed from the window at most once.

## Space Complexity Summary

O(k) for auxiliary hash maps, where k is the window/alphabet size.

## Resources

- LeetCode Sliding Window pattern articles
- GeeksforGeeks Sliding Window Technique

## Best Practices

- Identify whether the window size is fixed or variable before coding
- Use a hash map to track window state incrementally

## Typical Mistakes

- Not shrinking the window when the condition is violated
- Off-by-one errors in window boundary indices
- Recomputing window state from scratch instead of incrementally updating

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
