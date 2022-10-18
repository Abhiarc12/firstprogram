//it take less time as compared to linear search
// precondition - array should sorted
//it will divide the array into two parts recursively
#include<stdio.h>
int main()
{
   int a[5],i,n,mid,high,low;
   printf("enter the elements of array\n");
   for(i=0;i<5;i++)
   scanf("%d",&a[i]);
   printf("enter the element you want to search\n");
   scanf("%d",&n);
   low=0;
   high=4;
   mid=(low+high)/2;
   while(low<=high){
    if(a[mid]<n)
        low=mid+1;
    else if(a[mid]==n){
        printf("%d found at the index %d \n",n,mid);
        break;
    }
    else
        high=mid-1;
    mid=(low+high)/2;
   }
   if(low>high)
    printf("%d is not present in the array\n",n);
    printf("Code is Written by Abhinav Raj Srivastava\nCSME-2A\n2021B1531174");
   return 0;
}
