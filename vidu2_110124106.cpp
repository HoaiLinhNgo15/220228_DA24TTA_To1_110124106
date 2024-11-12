#include <stdio.h>
void diemthi(float a, float b, float c);
void nhapTT(char a[], char b[], char c[], char d[]);
int main()
{
	int a, b=5;
	float d1, d2, d3;
	char mssv[10], name[30], namsinh[5], lop[8];
	printf("Nhap mot so de in ra: ");
	scanf("%d", &a);
	printf("\nSo thu nhat: %d\nSo thu hai: %d", a, b);
	printf("\nTich hai so nay la: %d", a*b);
	nhapTT(mssv, name, namsinh, lop);
	diemthi(d1, d2, d3);
	return 0;
}

//ham nhap/xuat diem thi cua sinh vien 
void diemthi(float a, float b, float c)
{
	printf("\nNhap diem mon thu nhat: ");
	scanf("%f", &a);
	printf("\nNhap diem mon thu 2: ");
	scanf("%f", &b);
	printf("\nNhap diem mon  thu 3: ");
	scanf("%f", &c);
	printf("\nDiem mon 1: %.2f\nDiem mon 2: %.2f\nDiem mon 3: %.2f", a, b, c);
	printf("\nTong diem cua to hop 3 mon: %.2f", a+b+c);
}

//ham nhap/xuat thong tin cua sinh vien
void nhapTT(char a[], char b[], char c[], char d[])
{
	printf("\nNhap ma so sinh vien: ");
	fflush(stdin);
	scanf("%s", a);
	printf("\nNhap ho va ten: ");
	fflush(stdin);
	gets(b);
	printf("\nNhap nam sinh cua ban: ");
	fflush(stdin);
	gets(c);
	printf("\nNhap ma lop cua ban: ");
	fflush(stdin);
	gets(d);
	printf("\nMSSV: %s\nHoTen: %s\nNamSinh: %s\nMaLop: %s", a, b, c, d);
}

