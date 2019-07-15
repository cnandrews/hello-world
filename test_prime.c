#include<stdio.h>
#include<math.h>


int prime(int a)
{
	int i;
	int flag = 1;

	for(i = 2; i <= a/2&&flag ==1; i++)
	{
		if((a%i) == 0)
			flag = 0;	
		
			
	}

	return (flag);
}

int main()
{
	int a;

	printf("please input a number:\n");
	scanf("%d",&a);

	if(prime(a))
		printf("the number is a prime!\n");
	else
		printf("the number is not a prime!\n");

	return 0;
}
