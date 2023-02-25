# [0x0B. Making Change](https://intranet.hbtn.io/projects/1739)

This Python function takes a list of coin values and a total amount of money, and determines the fewest number of coins needed to make change for that amount.

## Usage

```python

from make_change import make_change

coins = [1, 5, 10, 25]
total = 42

result = make_change(coins, total)

print(result)  # Output: 5
```

## Arguments

* coins (list): A list of coin values. Each value in the list should be a positive integer that represents the value of a coin in cents. For example, [1, 5, 10, 25] represents pennies, nickels, dimes, and quarters.

* total (int): The total amount of money to make change for. This should be a positive integer that represents the amount of money in cents.

## Return Value

The function returns the fewest number of coins needed to make change for the given amount of money. If change cannot be made with the given coins, the function returns -1.

## Example

```python
coins = [1, 5, 10, 25]
total = 42

result = make_change(coins, total)

print(result)  # Output: 5
```
