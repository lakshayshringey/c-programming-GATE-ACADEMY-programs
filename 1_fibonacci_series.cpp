//fibonacci series => efficient code
#include<stdio.h>
int main ()
{
	int num;
	printf("Enter the number of terms you want to print fibonacci series: ");
	scanf("%d",&num);
	printf("\nTerms you want to print is: %d\n", num);
	
	int x=0, y=1;
	long int sum=0;
	for (int i=0; i<num; i++)
	{
		if(i==0)
			printf("%d",x);				//printing 1st term
		else
			if(i==1)
				printf("\t%d",y);		//printing 2nd term
			else
				{
					sum=x+y;			//printing 3rd term and onwards
					printf("\t%d",sum);
					
					x=y; y=sum;
				}
	}
	
	return 0;
}

