n = input()
sum=0
cnt=0
f=0
while n!=1:
	i=n
	while(i):
		k=i%10
		sum+=k*k
		i/=10
	n=sum
	sum=0
	cnt+=1
	if(n%5==0 and n%10!=0):
		f=1
		break
if f==1:
	print "-1"
else:		
	print cnt




