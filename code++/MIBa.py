def fact(n):
    if n<=1:  
        return 1
    else :
	return n*fact(n-1)

import sys

T = int(raw_input())
for y in range(T):
    n = int(raw_input())
    st = list()
    st = map(str,sys.stdin.readline().split())
    #for i in range(0,n):
	#st.insert(i, str(raw_input().split()))     
    ans =1
    for i in range(0,n-1):
        k = fact(n-i-1)   
        #sys.stdout.write('#' + str(k) + '\n')
        v=0
        for j in range(i+1,n):
           if st[j]<st[i] :
               #sys.stdout.write('#' + str(st[j]) + '\n') 
               v=v+1
        ans += v*k;
    sys.stdout.write(str(ans) + '\n')
    sys.stdout.flush()
