def fact(n):
    if n<=1:  
        return 1
    else :
	return n*fact(n-1)

import sys

T = int(raw_input())
for y in range(T):
    n = int(raw_input())
    st = ["" for x in range(n)]
    for i in range(n):
	st[i] = str(raw_input())
	ans =1
	for i in range(n-1):
            k = fact(n-i-1)   
            v=0
            j=i+1
            for j in range(n-1):
                if st[j]<st[i] :
                    v=v+1
            ans += v*k;
    sys.stdout.write(str(ans) + '\n')
    sys.stdout.flush()
