#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,position,swap,a[100],d,n;
printf("Enter The No. Of Elements\n");
scanf("%d",&n);
printf("Enter %d Integers\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<(n-1);i++)
{
position=i;
for(d=c+1;d<n;d++)
{
if(array[position]>array[d])
position=d;
}
if(position!=i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}
printf("Sorted List in Ascending Order is:\n");
for(i=0;i<=n;i++)
{
printf("%d\t",a[i]);
}
getch();
