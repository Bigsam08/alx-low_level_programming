#!/usr/bin/python3
"""
    function to find the island perimeter of of an island found in grid
    args: grid - list of int rep the island.
"""


def island_perimeter(grid):
    """
    Return the perimeter.
    """
    breath = len(grid[0])
    length = len(grid)
    edges = 0
    size = 0

    for a in range(length):
        for b in range(breath):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    perimeter = size * 4 - edges * 2
    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
