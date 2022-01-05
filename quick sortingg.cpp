 #include<stdio.h>
void quicksort(int a[],int,int);
int main()
{
	int list[20],i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	quicksort(list,0,n-1);
	printf("\n applying sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",list[i]);
	}
	printf("\n");
	return 0;
}
void quicksort(int list[],int low,int high)
{
	int pivot,i,j,temp;
	if(low<high)
	{
		pivot=low;
		i=low;
		j=high;
	while(i<j)
	{
		while(list[i]<=list[pivot] && i<=high)
		{
			i++;
		}
		while(list[j]>list[pivot] && j>=low)
		{
			j--;
		}
		if(i<j)
		{

		temp=list[i];
		list[i]=list[j];
		list[j]=temp;
	}
	}
	temp=list[j];
	list[j]=list[pivot];
	list[pivot]=temp;
	quicksort(list,low,j-1);
	quicksort(list,j+1,high);
}
}
