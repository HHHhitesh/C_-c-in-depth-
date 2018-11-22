#include<stdio.h>
int main(void)
{
int a[10][10],i,j,r,c,b[10][10];
printf("enter the value of row and column:");
scanf("%d%d",&r,&c);
printf("enter array element: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("if [i]=%d [j]=%d\n",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[j][i]=a[i][j];
}
printf("original matrix");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",a[i][j]);
}
}
printf("transpose matrix");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",b[i][j]);
}
}
printf("\n");
return 0;
}
