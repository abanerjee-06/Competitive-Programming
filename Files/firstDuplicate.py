def firstDuplicate(a):
    D = {}
    for i in range(len(a)):
        if (a[i] not in D):
            D[a[i]] = 0
        elif ((a[i] in D) and D[a[i]]==0):
            D[a[i]] = i
    L = []
    for i in D:
        if (D[i] != 0):
            L.append(D[i])
    if (len(L) == 0):
        return -1
    else:
        L = sorted(L)
        for i in D:
            if (D[i] == L[0]):
                return i
                break