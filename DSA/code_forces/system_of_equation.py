n, m = map(int, input().split())

res = 0

# Test every possible combination of a and b independently
for a in range(32):
    for b in range(32):
        if (a**2 + b == n) and (a + b**2 == m):
            res += 1

print(res)
