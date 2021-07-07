import sys
def maxSubArraySum(a,size):
        ##Your code here
        curr_max,curr_sum,flag = -1e9,0,False
        for i in range(size):
            if (a[i] >= 0):
                flag = True
            curr_sum += a[i]
            if (curr_max < curr_sum):
                curr_max = curr_sum
            if (curr_sum < 0):
                curr_sum = 0
        if (not flag):
            curr_max = max(a)
        return curr_max

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
print(maxSubArraySum(L[0],len(L[0])))