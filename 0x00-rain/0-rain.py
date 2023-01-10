#!/usr/bin/python3

def rain(walls):
    """
    rain
    """
    if not walls or len(walls) < 3:
        return 0
water = 0
for i in range(1, len(walls) - 1):
    left = max(walls[:i])
    # print("left: ", left)
    right = max(walls[i + 1:])
    # print("right: ", right)
    water += max(0, min(left, right) - walls[i])
    # print("water: ", water)
return water
