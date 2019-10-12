r = int(input())
n = r//7*2

r %= 7

print(n+max(0,r-5),n+min(2,r))
