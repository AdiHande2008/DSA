# Deque

## Introduction

A deque (double-ended queue) allows insertion and deletion from both the front and back in O(1) amortized time.

## Why This Topic Is Important

Deques are the backbone of the sliding window maximum/minimum pattern and are useful whenever both-end access is needed.

## Common Interview Questions

- Sliding Window Maximum
- Design Circular Deque
- Shortest Subarray with Sum at Least K

## Common Patterns

- Monotonic deque for maintaining window extremes
- Palindrome checking from both ends

## STL / Standard Library Used

`deque` (`push_front`, `push_back`, `pop_front`, `pop_back`)

## Time Complexity Summary

Push/Pop from either end: O(1) amortized.

## Space Complexity Summary

O(n).

## Resources

- cppreference `std::deque`
- GeeksforGeeks Deque Data Structure

## Best Practices

- Store indices, not values, in a monotonic deque to know when elements expire from the window
- Prefer `deque` over `vector` when frequent front operations are needed

## Typical Mistakes

- Using `vector::erase(begin())` (O(n)) instead of `deque::pop_front()` (O(1))
- Forgetting to remove out-of-window indices

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
