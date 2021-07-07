import sys
def rearrange(arr, n): 
    ##Your code here
    L,s,e = [],0,n-1
    while (s <= e):
        L.append(arr[e])
        e -= 1
        L.append(arr[s])
        s += 1
    for k in range(n):
        arr[k] = L[k]
    return arr    

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(rearrange(L[0],len(L[0])))
