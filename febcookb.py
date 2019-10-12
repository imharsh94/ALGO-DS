from sys import stdin,stdout
from math import sqrt
for _ in range(int(stdin.readline())):
    n,a,b,c=map(int,stdin.readline().split())
    array=list()
    for i in range(1,int(sqrt(n))+1):
        if n%i==0:
            array.append(i)
            if i!=n/i:
                array.append(n/i)
    count=0
    for i in range(len(array)):
        if array[i]>a:
            continue
        for j in range(len(array)):
            if n%(array[i]*array[j])!=0:
                continue
            if array[j]>b:
                continue
            k = n/array[i]/array[j]
            if k<=c:
                count+=1
    stdout.write("%d\n"%(count))
        
        