import sys
from math import log10
def isvalid(x,y):
    if (x == 1):
        return False
    else:
        if (y/x > log10(y)/log10(x)):
            return True
        else:
            return False

def remove_dup(arr1,n,arr2,m):
    D = {}
    for i in range(n):
        if (arr1[i] not in D):
            D[arr1[i]] = 1
        else:
            arr1.pop(i)
    for i in range(m):
        if (arr2[i] in D):
            arr2.pop(i)
    return arr1,arr2

def binarysearch(arr,num):
    l,r = 0,len(arr)-1
    while (l <= r):
        mid = (l+r)//2
        if (isvalid(num,arr[mid]) == True):
            if (isvalid(num,arr[mid+1]) == False):
                return mid
            else:
                l = mid+1
        else:
            if (isvalid(num,arr[mid-1]) == True):
                return mid-1
            else:
                r = mid-1
    

def countPairs(a,b,M,N):
    a,b = remove_dup(a,M,b,N)
    b.sort()
    c = 0
    for i in range(len(a)):
        if (isvalid(a[i],b[0]) == False):
            c += 0
        elif (isvalid(a[i],b[-1]) == True):
            c += len(b)
        else:
            idx = binarysearch(b,a[i])
            c += idx+1
    return c

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(countPairs(L[0],L[1],len(L[0]),len(L[1])))
    