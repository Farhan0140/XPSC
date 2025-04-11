n = int(input())
arr = list( map( int, input().split() ) )
arr1 = arr[::-1]

if arr == arr1:
    print("YES")
else:    
    print("NO")