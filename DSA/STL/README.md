# STL

## Introduction

The C++ Standard Template Library (STL) is a collection of template classes and functions providing common data structures (vector, map, set, etc.) and algorithms (sort, binary_search, etc.). Mastery of STL is essential for writing fast, correct, and concise competitive/interview code in C++.

## Why This Topic Is Important

- Saves implementation time during interviews and contests
- Reduces bugs by using well-tested containers/algorithms
- Interviewers expect familiarity with STL for C++ candidates
- Forms the foundation for almost every other topic in this repository

## Common Interview Questions

- Implement a LRU Cache using `list` + `unordered_map`
- Find k-th largest element using `priority_queue`
- Custom comparator sorting with `sort()` and lambdas
- Iterator invalidation questions on `vector`/`map`

## Common Patterns

- Choosing the right container for the right complexity guarantee
- Using `pair`/`tuple` for multi-value returns
- Using `unordered_map`/`unordered_set` for O(1) average lookups
- Using `priority_queue` for top-k / greedy problems
- Using iterators (`begin()`, `end()`, `rbegin()`) correctly

## STL / Standard Library Used

`vector`, `array`, `deque`, `list`, `forward_list`, `stack`, `queue`, `priority_queue`, `set`, `multiset`, `map`, `multimap`, `unordered_set`, `unordered_map`, `pair`, `tuple`, `algorithm` (`sort`, `lower_bound`, `upper_bound`, `next_permutation`, `accumulate`, `binary_search`)

## Time Complexity Summary

| Container | Access | Search | Insert | Delete |
|---|---|---|---|---|
| vector | O(1) | O(n) | O(1) amortized (end) | O(n) |
| set/map | O(log n) | O(log n) | O(log n) | O(log n) |
| unordered_set/map | O(1) avg | O(1) avg | O(1) avg | O(1) avg |
| priority_queue | O(1) top | - | O(log n) | O(log n) |

## Space Complexity Summary

Most containers use O(n) space; `unordered_map`/`unordered_set` may use extra space for hash buckets, and tree-based containers (`set`/`map`) have per-node overhead.

## Resources

- cppreference.com (official reference)
- "Effective STL" by Scott Meyers
- GeeksforGeeks STL tutorials

## Best Practices

- Prefer `emplace_back` over `push_back` to avoid extra copies
- Reserve vector capacity when size is known in advance
- Use `const auto&` in range-based for loops to avoid copies
- Prefer `unordered_map` unless ordered iteration is required

## Typical Mistakes

- Invalidating iterators after modifying a container while iterating
- Assuming `unordered_map` gives sorted order
- Forgetting `#include <bits/stdc++.h>` is non-portable outside competitive judges
- Off-by-one errors with `lower_bound`/`upper_bound`

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
