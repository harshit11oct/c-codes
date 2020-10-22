def fact(n):
  ans=1
  for i in range(2,n+1):
    ans=ans*i
  return ans 
def bin_prob(n,x,p):
  return (fact(n)/(fact(x)*fact(n-x)))*pow(p,x)*pow(1-p,n-x)
p=0.1 #10% of consumers
n=20 #20 consumer purchase

# task 1
ans=bin_prob(n,5,p)
print("exactly 5 consumer return: ",ans)

# task 2
ans=0
for i in range(6):
  ans+=bin_prob(n,i,p)
print("max. of 5 consumer will return: ",ans)

# task 3
ans=0
for i in range(6,n+1):
  ans+=bin_prob(n,i,p)
print("more than 5 consumer will return: ",ans)