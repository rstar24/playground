def next_permutation(s):
    # Convert the string to a list of characters
    s = list(s)
    n = len(s)
    
    # Step 1: Find the largest index k such that s[k] < s[k + 1]
    k = n - 2
    while k >= 0 and s[k] >= s[k + 1]:
        k -= 1
    
    if k == -1:
        # The input is the last permutation
        return ''.join(s[::-1])
    
    # Step 2: Find the largest index l greater than k such that s[k] < s[l]
    l = n - 1
    while s[k] >= s[l]:
        l -= 1
    
    # Step 3: Swap s[k] and s[l]
    s[k], s[l] = s[l], s[k]
    
    # Step 4: Reverse the sequence from s[k + 1] to the end
    s = s[:k + 1] + s[k + 1:][::-1]
    
    # Convert the list of characters back to a string
    return ''.join(s)

# Example usage
input_permutation = "fjadbihgec"
next_perm = next_permutation(input_permutation)
print(next_perm)
