s = input()
s1 = s[:: -1]
s2 = s1.split(' ')
s2 = s2[::-1]

s3 = []
for val in s2:
    s3.append(val)
    s3.append(" ")


print(''.join(s3)[:len(s)])   