#include<stdio.h>
int main(void)
{
int a[10],i,j,temp;
printf("enter array elements: ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0,j=9;i<=j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("after reversing");
for(i=0;i<9;i++)
printf("%d  ",a[i]);
return 0;
}
