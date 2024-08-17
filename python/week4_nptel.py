def mystery(l):
    if l == []:
        return(l)
    else:
        return(mystery(l[1:])+l[:1])

print("Question 1")
print(mystery([22,14,19,65,82,55]))

pairs = [ (x,y) for x in range(4,1,-1) for y in range(5,1,-1) if (x+y)%3 == 0 ]
print("Question 2")
print(pairs)

wickets = {"Tests":{"Bumrah":[3,5,2,3],"Shami":[4,4,1,0],"Ashwin":[2,1,7,4]},"ODI":{"Bumrah":[2,0],"Shami":[1,2]}}

print("Question 3")
# wickets["ODI"]["Ashwin"][0:] = [4,4]
# wickets["ODI"]["Ashwin"].extend([4,4])
wickets["ODI"]["Ashwin"] = [4,4]
# wickets["ODI"]["Ashwin"] = wickets["ODI"]["Ashwin"] + [4,4] 
print(wickets)


hundreds = {}
hundreds["Tendulkar, international"] = 100
hundreds["Tendulkar"] = {"international":100}
hundreds[("Tendulkar","international")] = 100
hundreds[["Tendulkar","international"]] = 100 



