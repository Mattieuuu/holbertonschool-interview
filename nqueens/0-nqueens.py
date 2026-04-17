#!/usr/bin/python3
"""Solve the N queens puzzle and print all solutions."""

import sys


def is_safe(positions, row, col):
    """Check whether placing a queen at (row, col) is safe."""
    for prev_row in range(row):
        prev_col = positions[prev_row]
        if prev_col == col:
            return False
        if abs(prev_col - col) == abs(prev_row - row):
            return False
    return True


def print_solution(positions, size):
    """Print one solution as a list of [row, col] pairs."""
    solution = []
    for row in range(size):
        solution.append([row, positions[row]])
    print(solution)


def solve_nqueens(positions, row, size):
    """Backtracking solver that places one queen per row."""
    if row == size:
        print_solution(positions, size)
        return

    for col in range(size):
        if is_safe(positions, row, col):
            positions[row] = col
            solve_nqueens(positions, row + 1, size)


def main():
    """Validate arguments and launch the solver."""
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)

    try:
        size = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if size < 4:
        print("N must be at least 4")
        sys.exit(1)

    positions = [-1] * size
    solve_nqueens(positions, 0, size)


if __name__ == "__main__":
    main()
