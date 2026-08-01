# Contributing Guidelines

Thanks for considering a contribution to this repository. This is primarily a personal learning log, but corrections, improvements, and well-formed additions are welcome.

## Ways to Contribute

- 🐛 Report a bug or mistake in a solution's logic or complexity analysis
- 📝 Improve documentation clarity in a topic README
- ✨ Suggest a missing common interview problem for a topic
- 🎨 Improve formatting/consistency across problem READMEs

## Ground Rules

1. **One problem, one folder.** Name the folder exactly as the problem title (Title Case), e.g. `Longest Common Prefix/`.
2. **Every problem folder must contain:**
   - `README.md` (following the [template](_templates/Problem%20Name/README.md))
   - `solution.cpp`
3. **Do not submit solutions without documentation.** Code-only PRs will be asked to add the accompanying README.
4. **Follow the [Code Style Guide](README.md#code-style-guide-summary)** for naming and formatting.
5. **Keep topic README structure intact** — if you're improving a topic's README, preserve its section headers (Introduction, Why This Topic Is Important, etc.).

## Branch Strategy

- `main` — always stable, deployable/readable state
- `feature/<topic>-<short-description>` — e.g. `feature/graph-dijkstra`
- `fix/<short-description>` — for corrections

## Commit Message Convention

Follow [Conventional Commits](https://www.conventionalcommits.org/):

```
<type>(<scope>): <short description>

[optional body]
```

Types: `feat`, `fix`, `docs`, `style`, `refactor`, `test`, `chore`

Examples:
```
feat(arrays): add Kadane's Algorithm with dry run
docs(graph): clarify Dijkstra time complexity section
fix(dp): correct base case in Longest Common Subsequence
```

## Pull Request Guidelines

1. Fork the repository and create your branch from `main`.
2. Ensure the new/changed problem folder follows the template exactly.
3. Verify `solution.cpp` compiles: `g++ -std=c++17 -O2 -Wall -DLOCAL_TESTING solution.cpp -o solution`.
4. Fill out the [Pull Request Template](.github/PULL_REQUEST_TEMPLATE.md) completely.
5. Link any related issue.
6. One problem/topic per PR — keep PRs focused and reviewable.

## Repository Metadata (for maintainers)

- **Repository description**: "A structured, documentation-first collection of Data Structures & Algorithms in modern C++."
- **Repository topics**: `dsa`, `cpp`, `algorithms`, `data-structures`, `competitive-programming`, `interview-preparation`, `leetcode`
- **Labels**: `good-first-issue`, `documentation`, `bug`, `enhancement`, `topic:arrays`, `topic:graph`, `topic:dp`, ... (one `topic:*` label per folder, added as needed)
- **Milestones**: one per roadmap stage, e.g. `Stage 1 — Beginner`, `Stage 2 — Intermediate`, etc.

## Code of Conduct

Participation in this project is governed by the [Code of Conduct](CODE_OF_CONDUCT.md).
