l, r = map(int, input().split())
is_found = True

for i in range(l, r+1):
    s = str(i)
    is_ok = False

    for ch in s:
        if ch != '4' and ch != '7':
            is_ok = True
    
    if is_ok == False:
        is_found = False
        print(i, end=" ")


if is_found:
    print(-1)