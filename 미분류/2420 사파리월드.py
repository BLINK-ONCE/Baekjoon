def isNagative(num):
    if (num < 0): num = num * -1
    return num

m, n = map(int, input().split())

result = isNagative(n - m)

print(result)