# Trie

## Introduction

A trie (prefix tree) is a tree-like structure used to efficiently store and query strings, particularly for prefix-based operations.

## Why This Topic Is Important

Tries are used in autocomplete systems, spell checkers, and IP routing tables, and are commonly tested for string-heavy interview rounds.

## Common Interview Questions

- Implement Trie (Prefix Tree)
- Word Search II
- Add and Search Word
- Longest Word in Dictionary
- Replace Words

## Common Patterns

- Node-per-character insertion/search
- DFS over trie combined with backtracking (e.g., Word Search II)
- Marking end-of-word nodes

## STL / Standard Library Used

`unordered_map<char, TrieNode*>` or fixed-size `array<TrieNode*, 26>` per node

## Time Complexity Summary

Insert/Search/StartsWith: O(L) where L is the word length.

## Space Complexity Summary

O(N × L) in the worst case, where N is the number of words and L average length.

## Resources

- GeeksforGeeks Trie Data Structure
- CP-Algorithms Trie section

## Best Practices

- Use a fixed-size array of 26 children for lowercase-only alphabets for speed
- Mark `isEndOfWord` explicitly at each terminal node

## Typical Mistakes

- Not marking word-end nodes, causing false positives on prefix search
- Memory overhead from unnecessary node allocations
- Forgetting to free trie memory when working outside garbage-collected contexts

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
