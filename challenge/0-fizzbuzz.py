#!/usr/bin/env python3
import sys

def fizzbuzz(n):
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end=" ")
        elif i % 3 == 0:
            print("Fizz", end=" ")
        elif i % 5 == 0:
            print("Buzz", end=" ")
        else:
            print(i, end=" ")
    print()  # Pour finir par un saut de ligne

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <number>")
        sys.exit(1)
    try:
        n = int(sys.argv[1])
    except ValueError:
        print("Please provide an integer")
        sys.exit(1)
    fizzbuzz(n)
