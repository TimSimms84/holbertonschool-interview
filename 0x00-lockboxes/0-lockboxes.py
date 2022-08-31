#!/usr/bin/python3
"""You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other boxes.

Write a method that determines if all the boxes can be opened.

Prototype: def canUnlockAll(boxes)
boxes is a list of lists
A key with the same number as a box opens that box
You can assume all keys will be positive integers
There can be keys that do not have boxes
The first box boxes[0] is unlocked
Return True if all boxes can be opened, else return False"""


def canUnlockAll(boxes):
    """return True if all unlockable"""
    unlocked = [0]  # box 0 is unlocked by default
    for box, keys in enumerate(boxes):
        if not keys:  # if box doesn't contain key skip to next iteration
            continue
        for key in keys:  # check for unique keys
            if key < len(boxes) and key not in unlocked and key != box:
                unlocked.append(key)
    if len(unlocked) == len(boxes):  # check we have keys for all boxes
        return True
    return False
