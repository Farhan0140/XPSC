s = input()
res = []

l_cnt = r_cnt = 0
ans = ""

for ch in s:
    if ch == 'L':
        l_cnt += 1
        ans += ch
    else :
        r_cnt += 1
        ans += ch

    if l_cnt == r_cnt:
        res.append(ans)
        ans = ""




print(len(res))
for val in res:
    print(val)

