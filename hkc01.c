#include<stdio.h>
int main(void)
{
int a[10],i,n,pos,items;
printf("enter the array size: ");
scanf("%d",&n);
printf("enter array element:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter position of items");
scanf("%d%d",&pos,&items);
for(i=n-1;i>=pos;i--)
a[i+1]=a[i];
a[i+1]=items;
n=n+1;
printf("after insertion array:");
for(i=0;i<n;i++)
printf("%d  ",a[i]);
return 0;
}
