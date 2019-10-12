def printknap(W,wt,val,n):
    K = [[0 for w in range(W+1)] for i in range (n+1)]

    #building the table bottom up
    for i in range(n+1):
        for w in range(W+1):
            if(i==0 or w==0):
                K[i][w]=0
            elif(wt[i-1] <= w):
                K[i][w] = max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w])
            else:
                K[i][w] = K[i-1][w]


    print(K[n][W])
    w=W
    res=K[n][W]
    for i in range(n,0,-1):
        if res<=0:
            break
        if res == K[i-1][w]:
            continue
        else:
            print(wt[i-1],end=' ')
            res = res -val[i-1]
            w = w - wt[i-1]
    print()




val = [60,100,120]
wt = [10,20,30]
W = 50
n = len(val)
printknap(W,wt,val,n)