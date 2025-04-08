n = int(input())
arr = list( map( int, input().split() ) )

mp = {}
cnt = 0

for val in arr:
    if val in mp:
        if mp[val] == val:
            cnt += 1
            continue
        mp[val] += 1
    else:
        mp[val] = 1    
        

for k, v in mp.items():
    if k != v: 
        cnt += v
        
        
print(cnt)
