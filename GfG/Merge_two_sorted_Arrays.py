import sys
def merge(arr1,arr2,n,m):
    #code here
    i,j = 0,0
    L = []
    while (i<n and j<m):
        if (arr1[i] <= arr2[j]):
            L.append(arr1[i])
            i += 1
        else:
            L.append(arr2[j])
            j += 1
    if (i < n):
        while (i<n):
            L.append(arr1[i])
            i += 1
    if (j < m):
        while(j<m):
            L.append(arr2[j])
            j += 1
    i,j = 0,0
    while (i<n):
        arr1[i] = L[i]
        i += 1
    while (j<m):
        arr2[j] = L[i+j]
        j += 1
    return arr1,arr2
        

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(merge(L[0],L[1],len(L[0]),len(L[1])))