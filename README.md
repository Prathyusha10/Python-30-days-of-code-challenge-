# Python-30-days-of-code-challenge-
In hacker rank
# Day 2 - operators
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    tip_value= meal_cost*tip_percent/100
    tax_value= meal_cost*tax_percent/100
    total_cost = meal_cost+tip_value+tax_value
    print(round(total_cost))

if __name__ == '__main__':
    meal_cost = float(input())

    tip_percent = int(input())

    tax_percent = int(input())

    solve(meal_cost, tip_percent, tax_percent)
