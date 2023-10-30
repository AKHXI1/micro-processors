#include<stdio.h>
#include<stdlib.h>

void main()
{
	int head,n,sum=0,dist,i;
	printf("position of the head : ");
	scanf("%d",&head);
	printf("number of requests : ");
	scanf("%d",&n);
	int req[n];
	printf("request string :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&req[i]);
	}
	
	for(i=0;i<n;i++)
	{
		dist=abs(head-req[i]);
		sum+=dist;
		printf("head movement from cylinder %d to cylinder %d : %d\n",head,req[i],dist);
		head=req[i];
	}
	printf("Total head movement is  %d\n",sum);
}
