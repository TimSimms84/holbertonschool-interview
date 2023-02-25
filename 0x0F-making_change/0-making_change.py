#!/usr/bin/python3
"""
0-making_change.py
"""


def makeChange(coins, total):
    """Determine the fewest number of coins needed to make
    change for a given amount of money.
    Args:
        coins (list): A list of coin values.
        total (int): The total amount of money to make change for.
    Returns:
        The fewest number of coins needed to make change for the
        given amount of money. If change cannot be made, return -1.
    """
    coins.sort(reverse=True)
    totalCoins = 0
    for coin in coins:
        if total >= coin:
            totalCoins += total // coin
            total %= coin
    if total == 0:
        return totalCoins
    if total < 1:
        return 0
    return -1
