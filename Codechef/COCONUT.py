import sys

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
for i in range(1,L[0][0]+1):
    print(L[i][2]//L[i][0]+L[i][3]//L[i][1])
