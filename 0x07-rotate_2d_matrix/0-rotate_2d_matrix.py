#!/usr/bin/python3
"""Rotate 2D Matrix Module"""


def rotate_2d_matrix(matrix):
    """Rotate 2D Matrix

    Args:
        matrix (list): 2D matrix
    """

    # get length of matrix
    length = len(matrix)
    # create new matrix with same length
    result = [[0] * length for _ in range(length)]
    # iterate through matrix and assign values to new matrix
    for i in range(length):
        for j in range(length):
            result[j][length-1-i] = matrix[i][j]
    # reassign matrix to new matrix
    matrix[:] = result[:]
