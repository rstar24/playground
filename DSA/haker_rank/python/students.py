import math 
import pandas as pd 
import numpy as np 

students = []

if __name__ == '__main__':
    for _ in range(int(input())):
        temp = []
        name = input()
        score = float(input())
        temp.append(name)
        temp.append(score)
        students.append(temp)


names = [ students[i][0] for i in range(len(students)) ]
scores = [ students[i][1] for i in range(len(students)) ]

mydict = {
    "Names": names,
    "Scores": scores
}


df = pd.DataFrame(mydict)
df = df.sort_values(by='Scores', ascending=True)

names = df['Names'].tolist()
scores = df['Scores'].tolist()

print(names)
print(scores)
temp_name = []


for i in range(len(scores)-1):
    if scores[i] == scores[i+1]:        
        temp_name.append(names[i])
        temp_name.append(names[i+1])
        # print(names[i])
        # print(names[i+1])
        break
    else:
        continue

temp_name.sort()

for i in range(len(temp_name)):
    print(temp_name[i])

    # for j in range(len(scores)):
    #     if scores[i] == scores[j]:
    #         print(names[i])
    #         print(names[j])
    #     else:
    #         continue

    











        
        
