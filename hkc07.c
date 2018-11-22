#include<stdio.h>
int main(void)
{
int a[3][3],i,j;
printf("enter array element: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("two D array element\n");
for(i=0;i<3;i++)

{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}
