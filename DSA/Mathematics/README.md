# Mathematics

## Introduction

Mathematical problems in DSA cover arithmetic, combinatorics, geometry, and number properties frequently required to derive efficient algorithms.

## Why This Topic Is Important

A strong math foundation helps in deriving closed-form solutions and recognizing patterns that avoid brute-force approaches.

## Common Interview Questions

- Pow(x, n)
- Sqrt(x)
- Count Primes
- Excel Sheet Column Number
- Happy Number

## Common Patterns

- Fast exponentiation (binary exponentiation)
- Digit manipulation
- Combinatorics (nCr, permutations)

## STL / Standard Library Used

`cmath` (`pow`, `sqrt`, `abs`), `numeric` (`gcd`, `lcm`, `accumulate`)

## Time Complexity Summary

Varies; fast exponentiation runs in O(log n).

## Space Complexity Summary

O(1) typically.

## Resources

- GeeksforGeeks Mathematical Algorithms
- "Concrete Mathematics" by Knuth et al.

## Best Practices

- Use modular arithmetic to prevent overflow in large computations
- Use built-in `__gcd`/`std::gcd` instead of reimplementing Euclid's algorithm

## Typical Mistakes

- Overflow when multiplying large numbers without modulo
- Precision errors with floating-point math where integer math suffices

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
