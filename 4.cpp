#include<stdio.h>
int B=0,I=0,M=0,S=0;
void selection(int *a,int n)
{
int i, j, p, swap;
	for(i = 0; i < n - 1; i++)
{
p=i;
for(j = i + 1; j < n; j++)
{
if(a[p] > a[j])
p=j;
}
if(p != i)
{
swap=a[i];
a[i]=a[p];
a[p]=swap;
S++;
}
}
}

void merge_sort(int i, int j, int a[], int aux[]) {
	
    if (j <= i) {
        return;     
    }
    int mid = (i + j) / 2;

 
    
    merge_sort(i, mid, a, aux);   
    merge_sort(mid + 1, j, a, aux);    

    int pointer_left = i;       
    int pointer_right = mid + 1;       
	    int k;      
    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {      
            aux[k] = a[pointer_right];
            pointer_right++;
            M++;
        } else if (pointer_right == j + 1) {       
            aux[k] = a[pointer_left];
            pointer_left++;
             M++;
        } else if (a[pointer_left] < a[pointer_right]) {        
            aux[k] = a[pointer_left];
            pointer_left++;
             M++;
        } else {        
            aux[k] = a[pointer_right];
            pointer_right++;
             M++;
        }
    }

    for (k = i; k <= j; k++) {      
        a[k] = aux[k];
    }
}
void buble(int *a,int n)
{
	int i,j,temp=0;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
		a[j+1]=a[j];
		j--;
		B++;
		}
		a[j+1]=temp;
		B++;
	}
}
void insertion(int *ar, int n)
{
	int swap=0,i,d;
for (i = 0 ; i < n-1 ; i++)
  {
    for (d = 0 ; d < n -i-1; d++)
    {
      if (ar[d] > ar[d+1]) 
      {
        swap       = ar[d];
        ar[d]   = ar[d+1];
        ar[d+1] = swap;
        I++;
      }
    }
  }
}
int main()
{
	int i=0,j=0,n,temp=0,aux[100];
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection(a,n);
    printf("Printing the  selection sorted array:\n");
    for(i = 0; i < n; i++)
    printf("%d\n", a[i]);
    insertion(a,n);
    printf("Printing the  insertion  sorted array:\n");
	for(i=0;i<n;i++)
	printf(" %d\n",a[i]);
	buble(a,n);
	printf("Printing the buble sorted array:\n");
	for(i=0;i<n;i++)
	printf("  %d\n",a[i]);
		 merge_sort(0, n - 1, a, aux);
	  printf("Printing the merge sorted array:\n");
 
  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);
	printf("selection =%d\n insertion= %d\n buble= %d\n merge= %d\n",S,I,B,M); 
	return 0;
}
