#!/usr/bin/python3

arr = []
num1 = range(100, 1000)
num2 = range(100, 1000)

for i in num1:
    for j in num2:
        calc = i * j
        rev = int(str(calc)[::-1])
        if rev == calc:
            arr.append(calc)

ans = max(arr)
print(ans)
