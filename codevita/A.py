
def main

N = int(input())

instructions = []
instructions_1 = []
instructions_2 = []

for i in range(N):
    temp = input()
    instructions.append(temp)

# print(instructions)
# Take the up down and count the no
# of times they appear in the instruction 
# sequentially
temp_list = []
for i in range(N):
    if (instructions[i] == 'down' or instructions[i] == 'up'):
        instructions_1.append(instructions[i])

def minSteps(inst :list) -> int:
    i = 0
    count = 0
    n = len(inst)
    while (i < n-1):
        if ((inst[i] == 'down' and inst[i+1] == 'up') or 
              (inst[i] == 'up' and inst[i+1] == 'down')):
            i = i + 1
            count = count + 1
        else:
            i = i + 1
    return count

print('Test Case 1 :')
print(minSteps(instructions_1))

print('Test Case 2 :')
print(minSteps(instructions_1))
