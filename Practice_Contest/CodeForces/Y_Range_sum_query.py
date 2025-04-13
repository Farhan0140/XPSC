n, q = list( map( int, input().split() ) )
arr = list( map( int, input().split() ) )

pre = arr

for i in range(1, n):
    pre[i] = pre[i-1] + arr[i]


while q > 0:
    l, r = list( map( int, input().split() ) )
    r -= 1
    l -= 1
    if l == 0:
        print(pre[r])
    else:   
        print( (pre[r] - pre[l-1]) )
    q -= 1
