#!/usr/bin/python3
"""
Thechincal interview preparation
This module that returns the perimeter of the island describ in grid
"""


def island_perimeter(grid):
    """ THis functions returns the
        perimeter of the island described in grid """
    perimeter = 0
    for i, row in enumerate(grid):
        for j, col in enumerate(row):
            if grid[i][j] == 1:
                perimeter = perimeter + 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter = perimeter - 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter = perimeter - 2
    return perimeter
