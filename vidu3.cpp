#include <stdio.h>
int main()
{
	int a, b;
	printf("\nNhap vao hai so can so sanh: ");
	scanf("%d %d", &a, &b);
	if (a < b)
		printf("\nSo be hon la: %d", a);
	else if(a > b)
		printf("\nSo be hon la: %d", b);
	return 0;
}
