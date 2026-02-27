#!/usr/bin/python3
"""
Module for solving the lockboxes problem.
"""


def canUnlockAll(boxes):
    """
    Determines if all boxes can be opened.

    This function uses a depth-first search approach to traverse through
    all accessible boxes starting from box 0 (which is always unlocked).
    It collects keys and opens boxes until no more boxes can be opened.

    Args:
        boxes (list of lists): A list where each element is a list of keys
                               contained in that box.

    Returns:
        bool: True if all boxes can be opened, False otherwise.
    """
    if not boxes:
        return False

    n = len(boxes)
    opened = set([0])  # Box 0 is unlocked by default
    keys = list(boxes[0])  # Keys from box 0

    while keys:
        key = keys.pop()
        # Check if key corresponds to a valid box and hasn't been opened yet
        if key < n and key not in opened:
            opened.add(key)
            keys.extend(boxes[key])

    return len(opened) == n
