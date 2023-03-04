#!/usr/bin/python3
"""
5-island_perimeter module defines a function island_perimeter
that calculates the perimeter of an island inside a grid. Grid
is a matrix of integers where 0 represents a water zone and
1 represents a land zone
"""


def island_perimeter(grid):
    """calculates the perimeter of an island inside grid
        grid: a matrix of integers
    """
    perimeter = 0
    sides = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                size = 4
                if i >= 1 and grid[i][j] == grid[i - 1][j]:
                    size = size - 1
                if j >= 1 and grid[i][j] == grid[i][j - 1]:
                    size = size - 1
                if i < (len(grid) - 1) and grid[i][j] == grid[i + 1][j]:
                    size = size - 1
                if j < (len(grid[i]) - 1) and grid[i][j] == grid[i][j + 1]:
                    size = size - 1
                sides.append(size)
    for k in range(len(sides)):
        perimeter = perimeter + sides[k]
    return perimeter
