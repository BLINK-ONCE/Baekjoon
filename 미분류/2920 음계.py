def isAscending(lst):
    for i in range(8):
        if (lst[i] != i + 1): return 0
    return 1
def isDescending(lst):
    for i in range(8):
        if (lst[i] != 8 - i): return 0
    return 1

scoreList = list(map(int, input().split()))

if (isAscending(scoreList)): print('ascending')
elif (isDescending(scoreList)): print('descending')
else: print('mixed')