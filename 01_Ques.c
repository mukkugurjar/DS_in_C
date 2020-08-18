#include<stdio.h>
 int bubbleSort(int arr[],int n)
 {
     int i,j,temp;
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-1-i;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
 }
  int swap(int b[],int n)
  {
      int i,j,temp;
      for(i=0;i<=n/2-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(b[j]==2*b[i])
              {
                  temp=b[j];
                  b[j]=b[i];
                  b[i]=temp;
                  i++;
              }
              
          }
      }
  }
int main()
{
    int n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n],c[n];
    printf("Enter element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("Sorted array is:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
     for(i=0;i<n;i++)
     {
         c[i]=a[i];
     }
      swap(c,n);
      printf("\nSwapped array is:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",c[i]);
     }
    return 0;
}
