def maxPrefixSum(arr, left, right):
    p = [0] * (right + 1 - left)
    p[0] = arr[left]
    i = 1
    for j in range(left + 1, right + 1):
        p[i] = arr[j] + p[i - 1]
        i += 1

    print(p)
    return max(p)

n = int(input())
arr = list(map(int, input().split()))


x = int(input())
for _ in range(x):
    left, right = map(int, input().split())
    result = maxPrefixSum(arr, left, right)
    print(result)