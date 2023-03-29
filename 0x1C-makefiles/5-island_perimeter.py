#!/usr/bin/python3
'''
Technical interview preparation
'''


def island_perimeter(grid):
    '''checks the grid'''
    perimeter = 0
    rows, cols = len(grid), len(grid[0])
    '''loop '''
    for i in range(rows):
        ''' loops through parent list'''
        for j in range(cols):
            '''loops through each sub list'''
            if grid[i][j] == 1:
                '''check top'''
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                '''check next row (bottom)'''
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                '''check left'''
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                '''check right or if it's last element'''
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
