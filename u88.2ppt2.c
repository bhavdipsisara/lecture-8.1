#include<stdio.h>
int main()

{
	int i,n,sum,avg;
	printf("enter size of arrya =");
	scanf("%d",&n);
	
	int arrya[n];
	
	for(i=0;i<n;i++)
	{
		printf("arrya[%d]=",i);
		scanf("%d",&arrya[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",arrya[i]);
		sum= sum+arrya[i];
	}
	printf("sum of all element in arrya = %d",sum);
	avg= sum/n;
	printf("\navg of arrya = %d",avg);
}