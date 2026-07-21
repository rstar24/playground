n = int(input())

mt = [list(map(int, input().split())) for _ in range(n)]

sums = []

res = 0 

for i in mt:
    sums.append(sum(i))

for i in sums:
    if i >= 2 : 
        res = res + 1


print(res) 

