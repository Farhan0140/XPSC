
a, b = map(int, input().split())
s = input()


if s[a] != '-':
    print("No")
else:
    is_ok = True

    for i in range(len(s)):
        if s[i].isdigit():
            continue
        elif i == a:
            continue
        else:
            is_ok = False

    if is_ok:
        print("Yes")
    else:
        print("No")



