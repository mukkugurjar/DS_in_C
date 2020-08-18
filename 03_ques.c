#include <stdio.h>
int bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int selectionSort(int a[], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
int insertionSort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
int main()
{
    int n, i, num, flag = 0, z;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n], c[n];
    printf("Enter element \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element you want to search\n");
    scanf("%d", &num);
    // bubbleSort(a, n);
    // selectionSort(a,n);
    insertionSort(a, n);
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            flag = 1;
            z = i;
        }
    }
    if (flag == 1)
    {
        printf("\nIndex of number you want to search is %d ", z + 1);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
