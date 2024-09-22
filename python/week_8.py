def maxSumWithDrops(marks, K):
    N = len(marks)
    # dp[i][k] will hold the maximum sum of the subarray ending at index i with k drops
    dp = [[-float('inf')] * (K + 1) for _ in range(N)]
    
    # Initialize the result to store the maximum sum
    result = marks[0]
    
    # Fill the DP table
    for i in range(N):
        for k in range(K + 1):
            if i == 0:
                # Base case: the first element
                dp[i][k] = marks[i] if k == 0 else 0
            else:
                # Option 1: Continue the subarray without dropping this element
                dp[i][k] = dp[i-1][k] + marks[i]
                
                # Option 2: Drop this element, if we have drops left
                if k > 0:
                    dp[i][k] = max(dp[i][k], dp[i-1][k-1])
            
            # Update the result with the maximum value found
            result = max(result, dp[i][k])
    
    return result

# Reading input
if __name__ == "__main__":
    # First line contains N and K
    N, K = map(int, input().split())
    
    # Following N lines contain the marks for each test
    marks = []
    for _ in range(N):
        marks.append(int(input()))
    
    # Output the result
    print(maxSumWithDrops(marks, K))
