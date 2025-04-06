import sys


t = int( input() )
while t > 0:
    
    n = int( input() )
    arr = list( map( int, input().split() ) )

    mn = sys.maxsize

    for i in range(0, n):
        for j in range(i+1, n):
            x = (arr[i] + arr[j])
            y = (j+1) - (i+1)
            mn = min(mn, (x+y))

    print(mn)

    t -= 1