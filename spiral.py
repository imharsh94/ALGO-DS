def rig(x,y):
    return x+1,y
def up(x,y):
    return x,y+1
def le(x,y):
    return x-1,y
def dwn(x,y):
    return x,y-1
moves = [rig, up,le, dwn]
def generate_points(end):
    from itertools import cycle
    _moves = cycle(moves)
    n = 1
    position = 0,0
    ttm = 1
 
    yield n,position
 
    while True:
        for _ in range(2):
            move = next(_moves)
            for _ in range(ttm):
                if n >= end:
                    return
                position = move(*position)
                n+=1
                yield n,position
        ttm+=1    
def sieve_eras(n):
    sz = n//2
    sieve = [1]*sz
    lt = int(n**0.5)
    for i in range(1,lt):
        if sieve[i]:
            value = 2*i
            value=value+1
            tmp = ((sz-1) - i)
            tmp = tmp//value
            sieve[i+value::value] = [0]*tmp
    return sieve
t=int(input())
z=[2] + [i*2+1 for i, v in enumerate(sieve_eras(1000000)) if v and i>0]
for i in range(t):
    a=int(input())
    index_position=z.index(a)+1
    p=list(generate_points(index_position))
    p=p[-1][1]
    print(p[0],p[1],sep=" ")

    
