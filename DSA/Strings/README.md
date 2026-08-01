# Strings

## Introduction

Strings are sequences of characters. String manipulation problems test understanding of indexing, hashing, pattern matching, and immutability/mutability trade-offs.

## Why This Topic Is Important

String problems are extremely common in interviews and often combine with hashing, two pointers, and dynamic programming.

## Common Interview Questions

- Longest Substring Without Repeating Characters
- Longest Palindromic Substring
- Valid Anagram
- Group Anagrams
- String to Integer (atoi)
- KMP Pattern Matching

## Common Patterns

- Two pointers / sliding window
- Hashing character frequencies
- Dynamic programming on substrings
- Prefix function / KMP / Z-function for pattern matching

## STL / Standard Library Used

`string`, `stringstream`, `unordered_map<char,int>`, `algorithm` (`reverse`, `sort`, `transform`)

## Time Complexity Summary

Most single-pass string algorithms run in O(n); pattern matching algorithms like KMP run in O(n + m).

## Space Complexity Summary

O(n) for auxiliary hash maps or DP tables; O(1) for pure two-pointer techniques.

## Resources

- CP-Algorithms String Processing section
- GeeksforGeeks String Data Structure
- "Algorithms on Strings" (Coursera)

## Best Practices

- Prefer `string` over C-style char arrays
- Use `stringstream` for parsing/tokenizing
- Precompute character frequency arrays for O(1) lookups

## Typical Mistakes

- Forgetting strings are immutable-like in some languages (not C++, but habit matters)
- Off-by-one indexing errors
- Ignoring case sensitivity or Unicode edge cases

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
