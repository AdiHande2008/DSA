# Greedy

## Introduction

Greedy algorithms make the locally optimal choice at each step, hoping to find a global optimum. They work only when the problem exhibits the greedy-choice property and optimal substructure.

## Why This Topic Is Important

Greedy problems test the ability to prove correctness of an intuitive approach and are common in scheduling and interval problems.

## Common Interview Questions

- Activity Selection
- Jump Game
- Gas Station
- Minimum Number of Platforms
- Huffman Encoding

## Common Patterns

- Sort by a key attribute, then scan greedily
- Exchange argument for proving optimality
- Interval scheduling

## STL / Standard Library Used

`vector`, `algorithm::sort` with custom comparators, `priority_queue`

## Time Complexity Summary

Usually O(n log n) due to sorting.

## Space Complexity Summary

O(n) or O(1) depending on whether auxiliary structures are needed.

## Resources

- GeeksforGeeks Greedy Algorithms
- "Competitive Programmer's Handbook" Greedy chapter

## Best Practices

- Always verify the greedy-choice property before assuming correctness
- Consider counter-examples when unsure if greedy applies

## Typical Mistakes

- Applying greedy to problems that actually require DP
- Incorrect sorting key choice
- Not handling ties in sorting comparators properly

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
