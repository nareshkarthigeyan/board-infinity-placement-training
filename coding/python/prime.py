import math

def isPrime(n):
    for i in range(2, math.floor(math.sqrt(n))):
        if n % i == 0:
            print("Not Prime!")
            return

    print("Prime!")

n = int(input())
isPrime(n)

