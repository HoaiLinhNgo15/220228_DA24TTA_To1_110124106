#include <stdio.h>
int main()
{
	int a;
	printf("\nNhap gio hien tai: ");
	scanf("%d", &a);
	if (a <18)
		printf("\nHave a good day!!");
	else if(a>=18)
		printf("\nHave a good night!!");
	return 0;
}
