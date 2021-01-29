def getValidNum(lst):
    sum = 0
    for i in range(5):
        sum += (lst[i]) ** 2
    return sum % 10

serialNumber = list(map(int, input().split()))
print(getValidNum(serialNumber))