#include<stdio.h>
#include<conio.h>
void main()
{
	int num,min,max,i;
   
	i=1;
	for( ; i<=2; )
	{
		printf("\n Enter number : ");
		scanf("%d",&num);
		if(i==1)
		{
			min=num;
			max=num;
		}
		else if(num<min)
		{
			min=num;
		}
		else if(num>max)
		{
			max=num;
		}
	 i++;
	}
	printf("\n Max value : %d",max);
	printf("\n Min value : %d",min);
}

