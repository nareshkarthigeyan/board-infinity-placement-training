n = int(input())
l = len(str(n))
n1 = n
num = 0
while(n1 != 0):
    digit = n1 % 10
    num += digit**l
    n1 //= 10

if num == n:
    print("It is an Armstrong Number!!")
else:
    print("It is not an Armstrong Number!!")