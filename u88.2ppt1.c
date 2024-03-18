#include<stdio.h>

int main()

{
	int i,n;
	printf("enter array of the legnth = ");
	scanf("%d",&n);
	int a[n];
	printf("enter array of element =\n ");
	int length;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<length;i++)
	{
		printf("%d",i);
	}
	length=sizeof(a)/sizeof(0);
	printf("length of arrya=%d\n",length);
	
}