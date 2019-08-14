#include <stdio.h>
int BinarySearch(int* a,int m , int n ,int e)
{
	int mid=(int)m+n/2;
	if(a[mid]==e)
	{
		return mid;
	}
	else if((a[mid]>e))
	{
		return BinarySearch(a,0 , mid-1 ,e);
	}
	else 
	{
		return BinarySearch(a,mid , n ,e);
	}
}
int main()
{
int n;
printf("enter the Size of the Array ");
scanf("%d",&n);
int a[100];
int i,e;
printf("Enter the Array Elements in Sorted order");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}
printf("Enter the element to be searched");
scanf("%d",&e);
printf("element is found at %d th index" , BinarySearch(a,0,n,e));
return 0;
	
}
