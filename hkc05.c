#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
#define SIZE3 10
int main(void)
{
int a[SIZE1],b[SIZE2],c[SIZE3],i,j,k;
printf("enter the element of array");
for(i=0;i<SIZE1;i++)
scanf("%d",&a[i]);
i=0;j=0;k=0;
while(i<SIZE1&&j<SIZE2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++
}
else
{
c[k++]=b[j];
j++;
}
if(i<SIZE1)
{
while(i<SIZE1)
{
c[k++]=a[i++];
}
if(j<SIZE2)
{
while(j<SIZE2)
{
c[k++]=b[j++];
}



