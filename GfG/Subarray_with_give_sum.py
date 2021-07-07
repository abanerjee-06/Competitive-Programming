import sys
def Subarray_sum(arr,s):
    l,r,c,n = 0,0,arr[0],len(arr)
    while (r < n):
        print('Start, End, Sum: ',l,r,c)
        if (c < s):
            r += 1
            if (r == n):
                return [-1]
            c += arr[r]
        elif (c > s):
            c -= arr[l]
            l += 1
        else:
            return [l,r]

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(Subarray_sum(L[0],L[1][0]))