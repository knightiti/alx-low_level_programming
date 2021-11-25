#!/usr/bin/python3
'''
Technical review preperation
'''

def island_perimeter(grid):
    '''
    A function that returns the perimeter of the island 
    described in grid
    '''
    perimeter = 0 
    
    for r in range(0, len(grid)):
        for c in range(0, len(grid[r])):
            if grid[r][c] == 1:
                if grid[r - 1][c] == 0:
                    perimeter += 1
                if grid[r + 1][c] == 0:
                    perimeter += 1
                if grid[r][c - 1] == 0:
                    perimeter += 1
                if grid[r][c + 1] == 0:
                    perimeter += 1
    return perimeter
