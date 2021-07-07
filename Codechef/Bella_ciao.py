import sys

L = []
for line in sys.stdin:
    L.append([int(i) for i in line.split()])
for i in range(1,L[0][0]+1):
    D,d,P,Q = L[i][0],L[i][1],L[i][2],L[i][3]
    c,r = D//d,D%d
    ans = d*((c*(2*P+(c-1)*Q))//2)
    if (r):
        ans += (P + c*Q)*r
        
    print(ans)
