tmp = [] 

k = str(input())
k = k.split()
k = [ int(x) for x in k ]
k = set(k)
print(4 - len(k))
