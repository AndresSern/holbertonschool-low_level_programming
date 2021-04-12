#!/usr/bin/python3

def island_perimeter(grid):
    len_verti = len(grid)
    len_Hori = len(grid[0])
    perimeter = 0
    for i, row in enumerate(grid):
        for j, col in enumerate(row):
            if grid[i][j] == 1:
                perimeter = perimeter + 4
                if i > 0 and grid [i-1][j] == 1:
                    perimeter = perimeter - 2
                if j > 0 and grid [i][j-1] == 1:
                    perimeter = perimeter  -2
    return perimeter

