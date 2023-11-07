#include<stdio.h>
void insert(int *arr,int i)
{
    int root=(i-1)/2;
     while(arr[root]>arr[i])
     {
        int temp=arr[root];
        arr[root]=arr[i];
        arr[i]=temp;
        i=root;
        root=(root-1)/2;
     }
     return;
}
int main()
{
   int n;
   printf("Enter number of elements:");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       insert(a,i);
   }
   printf("\nOUTPUT\n");
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
}
