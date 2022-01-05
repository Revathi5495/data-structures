#include<stdio.h>
int main()
{
	int a[20],n,i,j,k,temp;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	i=0;j=n-1;
	while(i<j)           
	{
		k=0;
		while(k<j)
		{
			k++;
		}
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		i++;j--;
	}
/*	for(i=0;j=n-1;i<j;i++;j--)
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}*/
/*
 for(i=0;i<=10/2;i++)
 {
 	temp=a[i];
 	a[i]=a[(n-1)-i];
 	a[(n-1)-i]=temp;
 }*/
 /*
 for(i=0;i<=10/2;i++)
 {
 	a[i]=a[i]+a[(n-1)-i];
 	a[i]=a[i]-a[(n-1)-i];
 	a[(n-1)-i]=a[i]-a[(n-1)-i];
 }*/
	printf("revesrse of the given array:");
	for(i=0;i<n;i++)
	{
      printf(" %d",a[i]);
}
}
