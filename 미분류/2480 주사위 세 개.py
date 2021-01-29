def isSame(num1, num2):
    if (num1 == num2): return 1
    return 0

a, b, c = map(int, input().split())

if (isSame(a, b) == 1 and 1 == isSame(b, c)): print(10000 + a * 1000)
elif (isSame(a, b)): print(1000+ a * 100)
elif (isSame(c, b)): print(1000+ b * 100)
elif (isSame(c, a)): print(1000+ a * 100)
elif (isSame(a, b) == 0 and isSame(b, c) == 0 and isSame(c, a) == 0):
    if (a > b and a > c): print(a * 100)
    if (b > c and b > a): print(b * 100)
    if (c > b and c > a): print(c * 100)