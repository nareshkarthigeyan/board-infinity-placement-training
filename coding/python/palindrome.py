n1 = int(input())

def isPalindrome(n1):
    n = str(n1)
    for i in range(len(n) // 2):
        if n[i] != n[-(i + 1)]:
            return False
    return True 

