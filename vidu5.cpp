#include <stdio.h>
int main()
{
	char a;
	float kq;
	int b, c;
	printf("\nNhap vao mot ki tu toan hoc: ");
	scanf("%c", &a);
	do
	{
		printf("\nNhap vao 2 so can tinh: ");
		scanf("%d %d", &b, &c);
	}while( b<=c);
	switch(a)
	{
		case '+':
		{
			kq=b+c;
			printf("\nKet qua phep tinh: %.2f", kq);
			break;
		}
		case '-':
		{
			kq=b-c;
			printf("\nKet qua phep tinh: %.2f", kq);
			break;
		}
		case '*':
		{
			kq=b*c;
			printf("\nKet qua phep tinh: %.2f", kq);
			break;
		}
		case '/':
		{
			kq=(float)b/c;
			printf("\nKet qua phep tinh: %.2f", kq);
			break;
		}
	}
	return 0;
}
