# 0. N queens

This project solves the N queens puzzle using backtracking.

## Requirements

- Python 3.4.3
- Ubuntu 14.04 LTS
- PEP 8 (1.7.x)
- First line of the script must be `#!/usr/bin/python3`
- Script must be executable
- Only `sys` module is allowed

## Usage

```bash
./0-nqueens.py N
```

- If wrong number of arguments: `Usage: nqueens N`
- If `N` is not a number: `N must be a number`
- If `N < 4`: `N must be at least 4`

## Output

Each solution is printed on one line in this format:

```text
[[row, col], [row, col], ...]
```
