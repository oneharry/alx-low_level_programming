#!/usr/bin/python3
""" Module determines the perimeter of a grid """


def island_perimeter(grid):
    """
        Function calculates the perimeter of a grid
        Returns: The perimeter
    """
    h = len(grid)
    w = len(grid[0])
    end = 0;
    size = 0;

    for x in range(h):
        for y in range(w):
            if grid[x][y] == 1:
                size = size + 1
                if (x > 0 and grid[x - 1][y] == 1):
                    end = end + 1
                if (y > 0 and grid[x][y - 1] == 1):
                    end = end + 1
    return ((size * 4) - (end * 2))
