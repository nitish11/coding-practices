#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[100];
	int i,j=0,state=1;
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		if(state==1 && str[i]!='b' && str[i]!='a')
		{
			str[j]=str[i];
			j++;
		}
		else if(state==2 && str[i]!='c')
		{
			str[j]='a';
			j++;
			if(str[i]!='b' && str[i]!='a')
			{
			str[j]=str[i];
			j++;
			}
		}
		if(str[i]=='a')
		state=2;
		else
		state=1;
		if (state == 2)
    	{
        str[j] = 'a';
        j++;
    	}
    	str[j]='\0';
	}
	cout<<str;
	return 0;
	
}
