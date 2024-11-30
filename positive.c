#include<stdio.h>
int main()
{
 
int num;
printf("enter a number\n");
scanf("%d", &num );
                                                                                                                                                        
if(num > 0)
	printf("number is positive\n");
else
	printf("error");

int i = num%10;
int j = num/10;
int a = j%10;
int b = j/10;
int c = b%10;
printf("unit place digit is %d\n",i);
printf("tans place digit is %d\n", a);
printf("handred place digit is %d\n",c);

int x = i+a+c;
printf("addition of all number is %d\n",x);
int sum=0, temp, k;
while (num>0)
{
temp=num%10;
k=num/10;
num=k;
sum=temp+sum;

     printf("value of temp %d\n",temp);



     
}

     printf("sum of all numbers %d\n",sum);



return 0;
}


