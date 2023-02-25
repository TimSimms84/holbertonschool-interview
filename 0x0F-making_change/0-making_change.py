#!/usr/bin/python3
"""
0-making_change.py
"""


def makeChange(coins, total):
    if total < 1:
        return 0
    totalCoins = 0
    coins.sort(reverse=True)
    for coin in coins:
        if total >= coin:
            totalCoins += total // coin
            total %= coin
    return totalCoins if total == 0 else -1
