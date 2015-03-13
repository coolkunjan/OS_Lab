#include<stdio.h>

void main()
{
	int allo[5][5];
	int totreq[5][5];
	int outst[5][5];
	int resource[5];
	int i,c,j,cnt,procnt=5;
	int done[5]={0};
	printf("Enter 25 values of allocated matrix(row wise):");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&allo[i][j]);
		}
	}
	
	printf("Enter 25 values of total requirement  matrix(row wise):");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&totreq[i][j]);
		}
	}
	
	printf("Enter 5 values of available vector:");
	
	for(j=0;j<5;j++)
	{
		scanf("%d",&resource[j]);
	}
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			outst[i][j]=totreq[i][j]-allo[i][j];
			printf("%d", outst[i][j]) ;
		}
	}
	printf("THE ORDER:\n");
	while(procnt>=1)
	{
		for(i=0;i<5;i++)
		{
			cnt=0;
			if(done[i]!=1)
			{
				for(j=0;j<5;j++)
				{
						if(outst[i][j]<=resource[j])
						{
							cnt++;
						}
				}
			}
			
			if(cnt==5)
			{
				procnt--;
				done[i]=1;
				c=i+1;
				printf("\nProcess %d",c);
				for(j=0;j<5;j++)
				{
					resource[j]=resource[j]+allo[i][j];
				}	
			}
		}
	}
}
