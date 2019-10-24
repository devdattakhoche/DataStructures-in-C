#include<stdio.h>
/*int a[14] = {  14,19,5,6,3,235,2,34,42,23,454,4,657,5 };
void mergesort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    merge(a,s,e);


}
void merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(s<=mid && j<=e)
    {
        if(a[i]>a[j])
        {
            temp[k++]=a[j++];
        }
        else
        {
            temp[k++]=a[i++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    for(i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }

}
void main()
{
    int i;
    for(i=0;i<14;i++)
    {
        printf("%d\n",a[i]);
    }
    mergesort(a,0,13);
    for(i=0;i<14;i++)
    {
        printf("%d\n",a[i]);
    }
}
*/

void merge(int *a,int s,int e){
    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++]  = a[j++];
    }

    //We need to copy all element to original arrays
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }


}

void mergeSort(int a[],int s,int e){
    //Base case - 1 or 0 elements
    if(s>=e){
        return;
    }

    //Follow 3 steps
    //1. Divide
    int mid = (s+e)/2;

    //Recursively the arrays - s,mid and mid+1,e
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    //Merge the two parts
    merge(a,s,e);

}




int main(){

	int a[100];
	int n;
	printf("Enter No of elements you want in th array:");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
        printf("Enter No. %d :",i+1);
		scanf("%d",&a[i]);
	}

	mergeSort(a,0,n-1);

	for(int i=0;i<n;i++){
	    printf("%d\n",a[i]);
	}


}
