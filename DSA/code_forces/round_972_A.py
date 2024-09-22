def result(a):
    base = "aeiou"
    if (a == 1):
        return "a"

    elif (a <=5 ):
        s1 = ""
        for i in range(a):
            s1 += base[i]

        return s1

    else:
        s2 = ""
        s2 += base
        t = a-5 
        t2 = t//5
        t3 = t%5
        for i in range(t2):
            s2 += base
        
        for i in range(t3):
            s2 += base[i]
        
        return s2
    

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