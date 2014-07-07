#include<stdio.h>

int max(int x, int y)
{ return (y > x)? y : x; }

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0], i;
   int curr_max = a[0];

   for (i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

/* Driver program to test maxSubArraySum */
int main()
{
   //int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
   //int n = sizeof(a)/sizeof(a[0]);
   
   int a[11111],n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)scanf("%d",&a[i]);
   int max_sum = maxSubArraySum(a, n);
   printf("Maximum contiguous sum is %d\n", max_sum);
   
   scanf("%d",&n);
   return 0;
}
