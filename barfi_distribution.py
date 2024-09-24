def check(m):
  sum=0
  q=0
  for i in range(n):
    sum+=a[i]
    if sum>m:
        sum=0
        q+=1
  return q>=k
n,k=map(int, input().split())
a=list(map(int, input().split()))
l=0
r=10**9
while l<r:
    mid=(l+r)//2
    if check(mid):
        l=mid+1
    else:
        r=mid

print(l)
