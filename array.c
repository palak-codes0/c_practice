 #include<stdio.h>
int main()
{

int i,j,temp;
int a[5]={46,52,4,11,36};
for (int j=0;j<5;j++)
{
for (i=0;i<5;i++)
{
	if (a[j]<a[i])
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
}
}
                                                                                                                                                                                                   

for(int i =0; i<5; i++)
{
	printf("array element :%d is: %d\n", i, a[i]);
	
}

 return 0;
 }


