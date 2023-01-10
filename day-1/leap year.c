#include<stdio.h>
int main()
{
	int d,m,i,j=1;
	float y;
	while(j==1)
	{
		printf("enter  date/month/year: ");
		scanf("%d/%d/%f",&d,&m,&y);
		i=y;
		if(d>0 && m>0 && y>0 && i==y && d<32 && m<13)
		{
			if(i%4==0)
			{
				printf(" the given year is leap year");
			}
			else
			{
				printf(" the given year is not leap year");
			}
		}
		else
		{
			printf("invalid");
		}
		printf("\n do you want to continue:(1/0):");
		scanf("%d",&j);
		}
	}


OUTPUT
enter  date/month/year: 04/11/19.47
invalid
 do you want to continue:(1/0):1
enter  date/month/year: 11/15/1936
invalid
 do you want to continue:(1/0):1
enter  date/month/year: 31/45/1996
invalid
 do you want to continue:(1/0):1
enter  date/month/year: 64/09/1947
invalid
 do you want to continue:(1/0):1
enter  date/month/year: 00/00/2000
invalid
