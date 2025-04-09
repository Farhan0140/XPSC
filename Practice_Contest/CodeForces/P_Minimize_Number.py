n = int(input())
arr = list(map(int, input().split()))
tmp = []

cnt = 0
i = 0
is_ok = False

while i <= 100:
    for val in arr:
        if val & 1 or val <= 0:
            is_ok = True

    if is_ok == True:
        break

    cnt += 1

    for val in arr:
        tmp.append(int(val / 2))

    for val in tmp:
        if val & 1 or val <= 0:
            is_ok = True
    
    
    if is_ok == True:
        break

    

    arr.clear()
    for val in tmp:
        arr.append(val)
    tmp.clear()
    i += 1

print( cnt )