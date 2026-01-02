n = int(input())

def sumOfSq(n):
    sum = 0
    while n != 0:
        d = n % 10
        sum += d ** 2
        n //= 10
    return sum

def happy(n):
    while n != 1 or n != 4:
        n = sumOfSq(n)
        if n == 1:
            print("Happy")
            break
        elif n == 4:
            print("Not Happy")
            break

happy(n)