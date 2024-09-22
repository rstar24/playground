(Nstr,Kstr) = input().strip().split()
(N,K) = (int(Nstr),int(Kstr))

# Read marks

marks = [ 0 for i in range(N) ]
for i in range(N):
  marks[i] = int(input().strip())

# Initialize best

best = [ [ 0 for j in range(K+1) ] for i in range(N) ]

# Base case, incrementally track best answer
best[0][0] = marks[0]
ans = marks[0]

for j2 in range(1,K+1):
   best[0][j2] = max(marks[0],0)
   ans = max(ans,best[0][j2])

# Inductive case
for i in range(1,N):

  # Normal maximum segment
  best[i][0] = max(best[i-1][0],0)+marks[i]
  ans = max(ans,best[i][0])

  # Maximum segment with dropping
  for j in range(1,K+1):
    best[i][j] = max(best[i-1][j]+marks[i],best[i-1][j-1])
    ans = max(ans,best[i][j])

# Final answer
print(ans,end="") 