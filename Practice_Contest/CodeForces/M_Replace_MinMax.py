import sys


n = int( input() )
arr = list( map( int, input().split() ) )

mx = -sys.maxsize - 1
mn = -mx
l = r = 0

for i, val in enumerate(arr):
    if val > mx:
        mx = val
        l = i
    if val < mn:
        mn = val
        r = i

arr[l], arr[r] = arr[r], arr[l]

for val in arr:
    print( val, end=" " )




