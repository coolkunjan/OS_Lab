#include<stdio.h>
void main()
{
	int n,i,j,tr,w;
	int pburst[n];
	printf("Enter number of processes:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter burst time of process %d:",i+1);
		scanf("%d", &pburst[i]);
	}
	w=0;
	tr=0;
	for(j=0;j<n;j++)
	{
		printf("\nWaiting time for process %d: %d",j+1,w);
		tr=w + pburst[j];
		w=w+pburst[j];
		
		printf("\nTurn around time for process %d: %d",j+1 ,tr);
		
		printf("\n\n");
	}
}
