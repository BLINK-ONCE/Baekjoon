hour, minute, second = map(int, input().split())
bakeTime = int(input())
second += bakeTime

while (second >= 60):
    second -= 60
    minute += 1
while (minute >= 60):
    minute -= 60
    hour += 1
while (hour >= 24): hour -= 24

print(hour, minute, second)