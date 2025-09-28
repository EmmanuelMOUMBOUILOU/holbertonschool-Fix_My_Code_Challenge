#!/usr/bin/python3
import sys

def fizzbuzz(n):
    result = []
    for i in range(1, n + 1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz"
        if output == "":
            output = str(i)
        result.append(output)
    print(" ".join(result))

if __name__ == "__main__":
    fizzbuzz(int(sys.argv[1]))
