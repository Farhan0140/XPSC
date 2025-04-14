t = int(input())

while(t > 0):
    lst = list(map(str, input().split()))

    s = []

    for val in lst:
        s.append(val[0])

    print(''.join(s))

    t -= 1