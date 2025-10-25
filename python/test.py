from collections import defaultdict

def findTargetSumWays(nums: list[int], target: int) -> int:
    d = defaultdict(int)
    d[0] = 1
    print(d)

    for num in nums:
        dp = defaultdict(int)
        for k, v in d.items():
            dp[k + num] += v
            dp[k - num] += v
        d = dp
        print(d)

    return d[target]

l1 = [1,1,1,1,1]
t1 = 3

print(findTargetSumWays(l1,t1))