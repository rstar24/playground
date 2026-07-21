n = int(input())

if n % 2 == 1 :
    print(-1)
else:
    result = []

    for i in range(1, n , 2): 
        result.append(i+1)
        result.append(i)

    print(*result)
