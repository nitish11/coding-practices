#include<iostream>
using namespace std;


int findMin(int* arr, int start, int end)
{
    if(start == end)
        return arr[start];

    int mid = (start+end)/2;

    if(arr[mid] < arr[mid-1])
        return arr[mid];
    else if(arr[mid] < arr[end])
        return findMin(arr, start, mid-1);
    else if(arr[mid] > arr[end])
        return findMin(arr, mid+1, end);
}


int main()
{
int a[]={6, 7, 8, 9, 1, 2, 3, 4, 5};
cout<<findMin(a, 0,9);

return 0;
}
