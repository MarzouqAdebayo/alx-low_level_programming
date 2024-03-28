#!/usr/bin/python3
"""
Module '5-island_perimeter.py'. Calculates the perimeter of an island
in a square grid.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island represented by a grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island where 1
        represents land and 0 represents water.

    Returns:
        int: The perimeter of the island.

    Example:
        grid = [
            [0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0]
        ]
        island_perimeter(grid) # Output: 16
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid)):
            if (grid[i][j] == 1):
                try:
                    perimeter += 1 if grid[i - 1][j] == 0 else 0
                except IndexError:
                    perimeter += 1
                try:
                    perimeter += 1 if grid[i + 1][j] == 0 else 0
                except IndexError:
                    perimeter += 1
                try:
                    perimeter += 1 if grid[i][j - 1] == 0 else 0
                except IndexError:
                    perimeter += 1
                try:
                    perimeter += 1 if grid[i][j + 1] == 0 else 0
                except IndexError:
                    perimeter += 1
    return perimeter
