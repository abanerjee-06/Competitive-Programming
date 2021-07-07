import sys
def count_triple(arr):
    n = len(arr)
    if (n >= 3):
        l = []
        for i in range(n):
            for j in range(i+1,n):
                l.append(arr[i]+arr[j])
        c = 0
        for i in range(len(l)):
            if (l[i] in arr):
                c += 1
        return c
    else:
        return 0 

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(count_triple(L[0]))