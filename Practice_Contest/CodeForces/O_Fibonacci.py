
List = []

for i in range(0, 10000):
    List.append(-1)


def fib(n):
    global List

    if n == 0 or n == 1:
        return n
    
    if(List[n] != -1) :
        return List[n]
    
    List[n] = fib(n - 1) + fib(n - 2)
    return List[n] 


n = int( input() )

print( fib(n-1) )
