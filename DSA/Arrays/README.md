# Arrays

## Introduction

Arrays are contiguous blocks of memory storing elements of the same type, offering O(1) random access. They are the most fundamental data structure and the basis for many advanced techniques.

## Why This Topic Is Important

Arrays appear in nearly every coding interview, either directly or as the underlying storage for other structures like stacks, heaps, and hash tables.

## Common Interview Questions

- Two Sum
- Kadane's Algorithm (Maximum Subarray)
- Merge Intervals
- Rotate Array
- Trapping Rain Water
- Next Permutation

## Common Patterns

- Two pointers
- Sliding window
- Prefix sums
- Sorting + scanning
- In-place manipulation

## STL / Standard Library Used

`vector`, `array`, `algorithm` (`sort`, `reverse`, `accumulate`, `max_element`, `min_element`)

## Time Complexity Summary

Access O(1), Search O(n) (unsorted) / O(log n) (sorted), Insert/Delete O(n) in the worst case due to shifting.

## Space Complexity Summary

O(n) for the array itself; O(1) extra for in-place algorithms.

## Resources

- NeetCode Arrays playlist
- GeeksforGeeks Array Data Structure
- CLRS Chapter 2

## Best Practices

- Prefer in-place algorithms to save space
- Watch for integer overflow in prefix sums
- Validate array bounds carefully

## Typical Mistakes

- Off-by-one errors in loop bounds
- Not handling empty array edge cases
- Modifying array while iterating incorrectly

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
