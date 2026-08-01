# Hashing

## Introduction

Hashing maps keys to values via a hash function, enabling average O(1) insertion, deletion, and lookup, implemented via hash tables/hash maps/hash sets.

## Why This Topic Is Important

Hashing is used to optimize brute-force O(n²) solutions to O(n) across nearly every topic (arrays, strings, graphs).

## Common Interview Questions

- Two Sum
- Group Anagrams
- Longest Consecutive Sequence
- Subarray Sum Equals K
- Design HashMap

## Common Patterns

- Frequency counting
- Complement lookup (Two Sum style)
- Hashing for deduplication
- Custom hash functions for pairs/tuples

## STL / Standard Library Used

`unordered_map`, `unordered_set`, `map`, `set` (when order matters)

## Time Complexity Summary

O(1) average for insert/search/delete; O(n) worst case with poor hash distribution.

## Space Complexity Summary

O(n) for storing n key-value pairs.

## Resources

- GeeksforGeeks Hashing Data Structure
- CP-Algorithms Hashing

## Best Practices

- Reserve hash map capacity when size is known to reduce rehashing
- Provide custom hash functions for `pair`/`tuple` keys when needed

## Typical Mistakes

- Assuming worst-case O(1) (hash collisions can degrade to O(n))
- Using floating-point keys in hash maps (precision issues)
- Forgetting `unordered_map` does not preserve insertion or sorted order

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
