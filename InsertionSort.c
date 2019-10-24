#include<stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void main()
{
    int n;
    printf("Enter No. of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element no. %d\n",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    insertionSort(a,n);
    printf("Sorted Array:");
    for(int i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
}
