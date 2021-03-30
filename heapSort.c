#include<stdio.h>
#include<conio.h>
void heapsort(int[], int);
void heapify(int[], int);
void adjust(int[], int);
int main()
{
int array[50],n,i;
clrscr();
printf("Enter the no. of elements to be sorted:\n ");
scanf("%d",&n);
printf("Enter %d elements: \n",n);
for(i=0 ; i<n ; i++)
{
scanf("%d",&array[i]);
}
heapsort(array,n);
printf("Sorted list in ascending order using heap sort is:\n");
for(i = 0; i < n; i++)
{
printf("%d\t", array[i]);
}
printf("\n");
getch();
return 0;
}
void heapsort(int array[], int n)
{
int i,t;
heapify(array,n);
for(i=n-1 ; i>0 ; i--)
{
t = array[0];
array[0] = array[i];
array[i] = t;
adjust(array,i);
}
}
void heapify(int array[], int n)
{
int item,i,j,k;
for(k=1 ; k<n ; k++)
{
item = array[k];
i = k;
j = (i-1)/2;
while( (i>0) && (item>array[j]) )
{
array[i] = array[j];
i = j;
j = (i-1)/2;
}
array[i] = item;
}
}
void adjust(int array[], int n)
{
int item,i,j;
j = 0;
item = array[j];
i = 2*j+1;
while(i<=n-1)
{
if(i+1 <= n-1)
if(array[i] < array[i+1])
i++;
if(item < array[i])
{
array[j] = array[i];
j = i;
i = 2*j+1;
}
else
break;
}
array[j] = item;
}
