//Permutation fastest algorithm

using namespace std;
#include<iostream>
#include<cstring>

string a;
int k,countt=0;
void display(string str)
{
     cout<<str;
     countt++;
     cout<<endl;
}

void permute(int n)
{
    if(n==0)
    display(a);
    else
   {
    permute(n-1);
    int i;
    for(i=n-1;i>=0;i--)
    {
            if(a[n]!=a[i])
            {
             char temp=a[n];
             a[n]=a[i];
             a[i]=temp;
             permute(n-1);
             if(a[n]!=a[i])
             {temp=a[n];
             a[n]=a[i];
             a[i]=temp;}
           }
    }
  }
}


int main()
{
    cout<<"Enter Number to find number of permutations :";
    k=5;
    //getline(cin,k);
    getline(cin,a);
    //for(int j=0;j<k;j++){
            //a[j]=j+1;
      //      cin>>a[j];
       //     }
    permute(k-1);
    cout<<countt;
    cout<<a;
    system("pause");
    return 0;
}
