#include <stdio.h>

int dizileribirlestir(int list1[],int size1,int list2[],int size2,int list3[],int size3)
{
	int i=0,j=0,k=0;
	while(i<size1 && j<size2 && k<size3)
	{
		if(list1[i]<list2[j])
		{
			list3[k]=list1[i];
			i++;
		}
		else
		{
			list3[k]=list2[j];
			j++;
		}
		k++;
	}
	while (i < size1)
    {
        list3[k] = list1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        list3[k] = list2[j];
        j++;
        k++;
    }
	
	return list3;
}

int main()
{
	int i;
	int list1[5]={2,4,6,8,10};
	int list2[5]={1,7,9,11,13};
	int list3[10];
	int *ptr;
	ptr=dizileribirlestir(list1,5,list2,5,list3,10);
	for(i=0;i<10;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
