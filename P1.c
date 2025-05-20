#include <stdio.h>
int main()
{
	int num1, num2;
        printf("Enter two numbers : ");
        scanf("%d %d", &num1, &num2);
	int diff = num1 - num2;
	printf("The differece is : %d",diff);
	int sum = num1 + num2;
	printf("The sum is : %d",sum);
	int prod = num1 * num2;
	printf("The product is : %d",prod); 
}
