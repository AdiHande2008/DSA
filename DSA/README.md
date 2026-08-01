<div align="center">

# 🧠 DSA — Data Structures & Algorithms in C++

### A structured, documentation-first journey through DSA, built one problem at a time.

<!-- Replace with an actual banner image once created, e.g. assets/banner.png -->
<!-- ![Repository Banner](assets/banner.png) -->

[![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](CONTRIBUTING.md)
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg)](https://github.com/)
[![Progress](https://img.shields.io/badge/Progress-Tracked-blue.svg)](PROGRESS.md)

</div>

---

## 📖 Introduction

This repository is a personal, structured collection of **Data Structures and Algorithms (DSA)** problems and concepts, implemented in **modern C++ (C++17)**. It is organized topic-by-topic, with every topic and every problem documented before, during, and after the code is written.

The goal isn't just to "solve problems" — it's to build a resource that demonstrates:

- Consistent, deliberate practice
- Strong fundamentals across all major DSA topics
- Clear technical communication
- Software engineering habits (structure, documentation, version control hygiene)

---

## 🎯 Goals

- ✅ Cover every major DSA topic with a documented, in-depth README
- ✅ Maintain a consistent, reusable format for every problem solved
- ✅ Track progress transparently over time
- ✅ Build a resource useful to my future self, other learners, and reviewers
- ✅ Reflect real software engineering practices, not just "competitive programming dumps"

---

## 🗂️ Repository Structure

```text
DSA/
│
├── README.md                  # You are here
├── PROGRESS.md                 # Live progress tracker across all topics
├── ROADMAP.md                  # Recommended learning order
├── CONTRIBUTING.md             # Contribution guidelines
├── CODE_OF_CONDUCT.md          # Community standards
├── LICENSE                     # MIT License
├── .gitignore
│
├── .github/
│   ├── ISSUE_TEMPLATE/
│   │   └── ISSUE_TEMPLATE.md
│   └── PULL_REQUEST_TEMPLATE.md
│
├── _templates/
│   └── Problem Name/           # Reusable template for every new problem
│       ├── README.md
│       └── solution.cpp
│
├── STL/
├── Arrays/
├── Strings/
├── Recursion/
├── Backtracking/
├── Linked List/
├── Stack/
├── Queue/
├── Deque/
├── Trees/
├── Binary Search Tree/
├── Heap/
├── Trie/
├── Graph/
├── Dynamic Programming/
├── Greedy/
├── Sliding Window/
├── Two Pointers/
├── Binary Search/
├── Bit Manipulation/
├── Prefix Sum/
├── Hashing/
├── Mathematics/
├── Number Theory/
├── Segment Tree/
├── Fenwick Tree/
├── Union Find/
└── Miscellaneous/
```

Each topic folder contains its own `README.md` explaining the concept in depth (see [Documentation Standards](#-documentation-standards)), and will contain one subfolder per problem, each following the [problem template](_templates/Problem%20Name).

---

## 📚 Topics Covered

| Fundamentals | Linear Structures | Trees & Hierarchies | Algorithmic Techniques | Advanced |
|---|---|---|---|---|
| STL | Arrays | Trees | Recursion | Segment Tree |
| Strings | Linked List | Binary Search Tree | Backtracking | Fenwick Tree |
| Hashing | Stack | Heap | Dynamic Programming | Union Find |
| Bit Manipulation | Queue | Trie | Greedy | Number Theory |
| Mathematics | Deque | Graph | Sliding Window | |
| | | | Two Pointers | |
| | | | Binary Search | |
| | | | Prefix Sum | |

See [ROADMAP.md](ROADMAP.md) for the recommended learning order.

---

## 🧭 Learning Roadmap

A condensed view — full detail in [ROADMAP.md](ROADMAP.md):

```
Beginner  →  Intermediate  →  Advanced  →  Interview Preparation
```

---

## 📊 Progress

Live, per-topic progress is tracked in [PROGRESS.md](PROGRESS.md). A snapshot:

| Topic | Completed |
|---|---|
| Arrays | 0 / TBD |
| Strings | 0 / TBD |
| ... | ... |

> This table is a snapshot. [PROGRESS.md](PROGRESS.md) is the source of truth and is updated as problems are added.

---

## 🛠️ How to Use This Repository

1. **Browse by topic** — each folder has a `README.md` explaining the concept before you see any code.
2. **Study a problem** — every problem folder contains a `README.md` (problem breakdown) and a `solution.cpp` (implementation).
3. **Compile and run a solution**:
   ```bash
   g++ -std=c++17 -O2 -Wall -DLOCAL_TESTING solution.cpp -o solution
   ./solution
   ```
4. **Track progress** via [PROGRESS.md](PROGRESS.md) and [ROADMAP.md](ROADMAP.md).
5. **Contribute** — see [CONTRIBUTING.md](CONTRIBUTING.md) if you'd like to suggest improvements.

---

## ✅ Coding Standards

- **Language**: Modern C++17
- **Style**: See [Code Style Guide](#code-style-guide-summary) below and each topic's README
- **One problem, one folder** — named exactly as the problem (e.g. `Longest Common Prefix/`)
- **Every solution** must be accompanied by a completed `README.md` using the [template](_templates/Problem%20Name)

### Code Style Guide (Summary)

| Element | Convention | Example |
|---|---|---|
| Variables | `camelCase` | `maxProfit`, `leftPointer` |
| Functions | `camelCase` | `isPalindrome()`, `findMax()` |
| Classes | `PascalCase` | `class Solution` |
| Constants | `UPPER_SNAKE_CASE` | `const int MOD = 1e9 + 7;` |
| Files | `solution.cpp` | consistent per problem |
| Comments | Explain *why*, not *what* | avoid restating the obvious |
| Headers | Prefer explicit includes over `bits/stdc++.h` in production code (competitive-style files may use it for speed) |

Full guidance lives alongside each topic's README and in [CONTRIBUTING.md](CONTRIBUTING.md).

---

## 📘 Resources

- [CP-Algorithms](https://cp-algorithms.com/)
- [GeeksforGeeks — DSA](https://www.geeksforgeeks.org/data-structures/)
- *Introduction to Algorithms* (CLRS)
- *Competitive Programmer's Handbook* — Antti Laaksonen
- [NeetCode](https://neetcode.io/)
- [cppreference.com](https://en.cppreference.com/)

---

## 🚀 Future Plans

- [ ] Populate every topic with problems progressively
- [ ] Add a script to auto-generate PROGRESS.md from folder contents
- [ ] Add GitHub Actions to lint/compile-check every `solution.cpp` on push
- [ ] Add difficulty/topic tags as GitHub repository topics and issue labels
- [ ] Add a companion "Notes" wiki for deeper theory write-ups
- [ ] Explore a simple static site (GitHub Pages) to render this repo as a searchable knowledge base

---

## 📬 Contact

Maintained by **Adi** — B.Tech Computer Science student.
Feel free to open an issue or discussion for suggestions, corrections, or questions.

---

<div align="center">

*If this repository helped you, consider leaving a ⭐ — it keeps the motivation going.*

</div>
