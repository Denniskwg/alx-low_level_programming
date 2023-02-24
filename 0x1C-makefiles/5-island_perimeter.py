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
    sides = []
    length = len(grid)
    if length == 0:
        return 0
    for l in grid:
        for i in range(len(l)):
            if l[i] == 1 and len(sides) == 0:
                sides.append(3)
            elif l[i] == 1 and len(sides) > 0:
                sides.append(2)
    sides.append(1)
    perimeter = 0
    for i in range(len(sides)):
        perimeter = perimeter + sides[i]
    return perimeter
