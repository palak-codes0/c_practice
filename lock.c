#include<stdio.h>
int main()
{

int i,j,temp;
int a[5]={36,57,86,34,23};
                                                                                                                                                                                                    
for (i=0;i<4;i++)
{
	if (a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}

for(int i =0; i<5; i++)
{
	printf("array element :%d is: %d\n", i, a[i]);
	
}

 return 0;
 }






 

                                                                                                                                                                                                                                                                               
