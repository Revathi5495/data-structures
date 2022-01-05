#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	if(n>50)
	{
		printf("the array size is limited to 50 in this program\n");
	}
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	 printf("reverse of given array:");
             for(i=n-1;i>=0;i--)
           	printf("  %d",a[i]);
		}

