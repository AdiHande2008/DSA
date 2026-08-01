# Bit Manipulation

## Introduction

Bit manipulation involves using bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`) to solve problems efficiently at the binary level.

## Why This Topic Is Important

Bit tricks enable elegant O(1)/O(log n) solutions and are tested to evaluate low-level understanding of number representation.

## Common Interview Questions

- Single Number
- Counting Bits
- Power of Two
- Sum of Two Integers (without +/-)
- Subsets using Bitmask

## Common Patterns

- XOR for finding unique elements
- Bitmasking for subset enumeration
- Bit shifting for multiplication/division by powers of 2

## STL / Standard Library Used

Native bitwise operators; `bitset` for fixed-size bit arrays

## Time Complexity Summary

Most bit operations run in O(1) or O(log n) (e.g., counting set bits) per operation.

## Space Complexity Summary

O(1) typically.

## Resources

- GeeksforGeeks Bit Manipulation
- "Hacker's Delight" book

## Best Practices

- Use `x & (x-1)` to clear the lowest set bit
- Use `bitset` for readability when working with fixed-size bit arrays

## Typical Mistakes

- Sign-extension issues with right shift on negative numbers
- Off-by-one errors in bit indexing (0-indexed vs 1-indexed)
- Overflow when shifting beyond integer width

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
