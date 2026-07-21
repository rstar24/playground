
def ispalindrome(s: int) -> bool: 
    return s == s[::-1]


def subsequence(s: str, current="", index=0, res=None):

    if  res == None:
        res = []

    # base case
    if index == len(s):

        if current != "" and ispalindrome(current):
            res.append(current)

        return


    subsequence(s,current + s[index],index+1,res)
    subsequence(s,current ,index+1,res)


    return res


x = str(input())
print(max(subsequence(x)))








