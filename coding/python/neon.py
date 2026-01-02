num = int(input())

neon = num**2

sum = 0
while neon != 0:
    r = neon % 10
    sum += r
    neon //= 10

if sum == num:
    print("Neon!")
else:
    print("Not Neon!")