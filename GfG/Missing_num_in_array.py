import sys
def MissingNumber(array,n):
        # code here
        array.sort()
        num = 0
        if (array[0] != 1):
            num = 1
        elif (array[-1] != n):
            num = n
        else:
            for i in range(1,n-1):
                if (array[i]-array[i-1] > 1):
                    num = array[i]-1
                    break
        
        return num

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(MissingNumber(L[0],len(L[0])))