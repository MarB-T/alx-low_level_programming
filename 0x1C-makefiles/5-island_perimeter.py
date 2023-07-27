#!/usr/bin/python3
"""
This module calculates the perimeter of an island
"""

def island_perimeter(grid):
    """
    Function that takes a list of lists that represents the area of an island 
    and uses the information to find the perimeter
    """
    count = 0
    touches = 0
    height = 0
    width = 0
    if grid:
        for row in grid:
            height += 1
        width = len(grid[0])
        for x in range(height):
            for y in range(width):
                if grid[x][y] == 1:
                    count += 1
                    if y - 1 >= 0:
                        if grid[x][y - 1] == 1:
                            touches += 1
                    if y + 1 < width:
                        if grid[x][y + 1] == 1:
                            touches += 1
                    if x + 1 < height:
                        if grid[x + 1][y] == 1:
                            touches += 1
                    if x - 1 >= 0:
                        if grid[x - 1][y] == 1:
                            touches += 1
        perimeter = (count * 4) - touches
        return (perimeter)
