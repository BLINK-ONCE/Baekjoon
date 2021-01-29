task = int(input())
for i in range(task):
    OXResult = input()
    OXList = list(OXResult)
    sum = 0
    score = 1
    for i in OXList:
        if i == 'O':
            sum += score
            score += 1
        else: score = 1
    print(sum)