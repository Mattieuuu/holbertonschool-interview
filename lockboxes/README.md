# Lockboxes

## How It Works

Starting from box 0 (unlocked), collect all keys and use them to open new boxes. Track opened boxes in a set. Continue until no more boxes can be opened. Return `True` if all boxes are opened, `False` otherwise.

**Algorithm:** Depth-first search with a set to track visited boxes.

## Problem

Determine if all `n` locked boxes can be opened. Each box may contain keys to other boxes. Box 0 is unlocked.

## Usage

```python
canUnlockAll(boxes)  # Returns True/False
```

## Files

- `0-lockboxes.py`: Implementation of `canUnlockAll` function
