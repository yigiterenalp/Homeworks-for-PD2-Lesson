#include <stdio.h>
#define N 100

int hesapla(int a[],int num);

int main()
{
	int number,i;
	printf("Enter number of students: ");
	scanf("%d",&number);
	if(number>N)
	{
		printf("Try again!");
	}
	int a[number];
	printf("\nEnter student grades: \n");
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	int x=hesapla(a,number);
	printf("%d students failed course.",x);
}

int hesapla(int a[],int num)
{
	int fcounter=0,sum=0,j;
	for(j=0;j<num;j++)
	{
		sum+=a[j];
		if(a[j]<50)
		{
			fcounter++;
		}
	}
	printf("Average of students: %d\n",sum/j);
	return fcounter;
}

