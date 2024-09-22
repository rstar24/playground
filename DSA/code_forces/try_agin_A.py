def result(n):
    vowels = "aeiou"
    result = ""
    # Create the string by repeating the vowel sequence until length n
    for i in range(n):
        # result.append(vowels[i % 5])
        result += vowels[i % 5]
    
    return "".join(sorted(result))

def main():
    n = int(input())
    b = []

    for i in range(n):
        t = int(input())
        b.append(t)

    for i in range(len(b)):
        print(result(b[i]))
    
    return

main()