# Number Theory

## Introduction

Number theory covers properties of integers: primes, divisibility, modular arithmetic, and GCD/LCM — frequently the basis for competitive programming problems.

## Why This Topic Is Important

Number theory concepts like modular inverse and sieve algorithms are essential for problems involving large numbers and combinatorics.

## Common Interview Questions

- Sieve of Eratosthenes
- GCD and LCM
- Modular Exponentiation
- Prime Factorization
- Modular Multiplicative Inverse

## Common Patterns

- Sieve-based precomputation for prime queries
- Euclidean algorithm for GCD
- Fermat's little theorem for modular inverse

## STL / Standard Library Used

`numeric` (`gcd`, `lcm`), `vector<bool>` for sieve arrays

## Time Complexity Summary

Sieve of Eratosthenes: O(n log log n). GCD: O(log(min(a,b))).

## Space Complexity Summary

O(n) for sieve arrays.

## Resources

- CP-Algorithms Number Theory section
- "Elementary Number Theory" by David Burton

## Best Practices

- Precompute primes with a sieve when multiple queries are expected
- Use modular arithmetic consistently (mod after every operation) to avoid overflow

## Typical Mistakes

- Forgetting to take modulo at each step in large multiplications
- Off-by-one errors in sieve boundary conditions

## Progress

Track problems solved under this topic in [PROGRESS.md](../PROGRESS.md).

---

*Add new problems inside this folder using the template in [`_templates/Problem Name`](../_templates/Problem%20Name).*
