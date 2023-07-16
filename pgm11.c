#include<stdio.h>
int partition (int arr[],int l,int h)
{
int x=arr[h], temp;
int i = (l-1),j;
for(j=l;j<=h-1; j++)
{
if(arr[j]<=x)
{
i++;
temp = arr[i];
arr[j] = arr[i];
arr[i] = temp;
}
}
temp = arr[i+1];
arr[i+1] = arr[h];
arr[h] = temp;
return(i +1);
}
/*A[]-->Arraytobesorted,l -->Startingindex,h -->Endingindex*/
void quickSortIterative(int arr[],int l,int h)
{
//Createan auxiliarystack
int stack[10],p;
//initialize topofstack int
int top =-1;
//push initialvalues oflandhtostack
stack[++top]=l;
stack[++top]=h;
//Keeppopping fromstackwhileis notempty
while(top>=0)
{
//Pophandl
h=stack[top-- ];
l=stack[ top--];
//Setpivotelement at itscorrectposition insorted array
p=partition(arr,l,h);
//Ifthere are elementsonleftside ofpivot,thenpushleft side to stack
if ( p-1 > l )
{
stack[++top]=l;
stack[++top]=p- 1;
}
//Ifthere are elementsonrightsideofpivot, thenpushrightsidetostack
if(p+1<h )
{
stack[++top]=p+1;
stack[++top]=h;
}
}
}
//Driverprogramtotest abovefunctions
int main()
{
int arr[20],n,i;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter %d elements: ",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
quickSortIterative(arr,0,n -1);
printf("Elements of the array are: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
getch();
return 0;
}

