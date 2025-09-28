#!/usr/bin/env python3
import sys;[print("FizzBuzz" if i%15==0 else "Fizz" if i%3==0 else "Buzz" if i%5==0 else i, end=" ") for i in range(1, int(sys.argv[1])+1)];print()
