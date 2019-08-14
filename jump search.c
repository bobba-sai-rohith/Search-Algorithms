#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int a[100];
	int e;
	int step;
	printf("Enter size of Array");
	scanf("%d",&n);
	int i;
	printf("Enter Array Elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter Element to be Searched");
	scanf("%d",&e);
	int point=0;
	int prev=0;
	step=(int)sqrt(n);
	if(e<a[0])
	{
		printf("element not found");
		return 0;
	}
	if(e==a[0])
	{
		printf("element is found at 0th index");
		return 0;
	}
	while(a[point]<e)
	{
		prev=point;
		
		if(point==n-1)
		{
			printf("element not found");
			return 0;
		}
		point=point+step;
		if(point>n-1)
		{
			point=n-1;
		}
	}
	for(i=prev+1;i<=point;i++)
	{
		if(a[i]==e)
		{
			printf("element is found at %d index",i);
			return 0;
		}
		
	}
	printf("element not found ");
	return 0;
	
	
	
}
