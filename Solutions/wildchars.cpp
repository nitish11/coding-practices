#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100],str2[100];
	cin>>str1>>str2;
	int l1=strlen(str1);
	int l2=strlen(str2);
	int i=0;
	int j=0;
	for(;i<l1;)
	{
		for(;j<l2;)
		{
	if(str1[i]==str2[j] || str1[i]=='?' || str2[j]=='?')
	{
		i++;
		j++;
	}
	if(str1[i]==str2[j] || str1[i]=='*')
	{
		while(str1[i+1]!=str2[j] && str2[j]!='\0')
		j++;
	}
	if(str1[i]==str2[j] || str2[j]=='*')
	{
		while(str2[j+1]!=str1[i] && str1[i]!='\0')
		i++;
	}
	}
	}
	if((i==l1-1) && (j==l2-1))
	cout<<"Match\n";
	else 
	cout<<"NO match\n";
	return 0;
}
