#include<stdio.h>
#define SIZE 10

void Insert(int H[],int key)
{
    int index=Hash(key);
    if(H[index]!=0)
    {
        int k=probe(H,key,index);
        H[k]=key;
    }
    else
    {
        H[index]=key;
    }
}
int Hash(int key)
{
    int y=key%SIZE;
    return y;
}
int probe(int H[],int key,int index)
{
    int i=0;
    while(H[(Hash(key)+i)%SIZE]!=0)
    {
        i++;
    }
    return (index+i)%10;
}
int search(int H[],int key)
{
    int i=0;
    int index=Hash(key);
    while(H[(index+i)%SIZE]!=key)
    {
        i++;
    }
    return index+i+1;

}
void main()
{
    int HT[10]={0};
    Insert(HT,12);
    Insert(HT,32);
    Insert(HT,45);
    Insert(HT,67);
    Insert(HT,90);
    Insert(HT,47);
    Insert(HT,18);
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\n",HT[i]);
    }
    int c=search(HT,12);
    printf("%d",c);

}
