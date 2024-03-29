# rotate_2d_matrix

A function that rotates a 2D matrix by 90 degrees clockwise.

## Usage

The function takes a 2D matrix as input and rotates it in place, meaning that it modifies the original matrix. The function does not return anything.

```python
def rotate_2d_matrix(matrix):
    """Rotate 2D Matrix

    Args:
        matrix (list): 2D matrix
    """

    length = len(matrix)
    result = [[0] * length for _ in range(length)]
    for i in range(length):
        for j in range(length):
            result[j][length-1-i] = matrix[i][j]
    matrix[:] = result[:]
```
## Arguements

matrix (list): A 2D matrix, represented as a list of lists.

## Returns

This function operates in-place, meaning that it modifies the input matrix argument directly. No value is returned.

## Example
```python
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
rotate_2d_matrix(matrix)
print(matrix)
```

output:
```python
[[7, 4, 1], [8, 5, 2], [9, 6, 3]]
```

## Complexity

Time Complexity: O(n^2) - where n is the number of rows or columns in the matrix.
