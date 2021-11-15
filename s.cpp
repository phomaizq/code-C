#include<stdio.h>
#include<string.h>
#include<conio.h>

struct date
{
	unsigned char ngay;
	unsigned char thang ;
	int nam;
};
typedef struct sinhvien
{
	char hoten[110];
	char mssv[210];
	char lop[20];
	struct date ngth;
	char gt;
}sv;
void nhapngaysinh(date &d)
{
	printf("\nnhap ngay :");
	scanf("%u",&d.ngay);
	printf("\nnhap thang : ");
	scanf("%u",&d.thang);
	printf("\nnhap nam :");
	scanf("%d",&d.nam);
}
void xuatngaysinh(date d)
{
	printf("%02u / %02u / %4d",d.ngay,d.thang,d.nam);
}
void nhapsinhvien(sv &a)
{
	printf("nhap ho va ten :");
	gets(a.hoten);
	fflush(stdin);
	printf("nhap mssv :");
	scanf("%s",&a.mssv);
	printf("nhap ngay thang nam sinh :");
	nhapngaysinh(a.ngth);
	printf("nhap lop ");
	scanf("%s",&a.lop);
	do 
	{
		printf ("nam thi nhap x , nu thi nhap y:");
		a.gt=getche();
	}while( a.gt!='x' && a.gt!= 'y' );	
}
void xuatsinhvien(sv a)
{
	printf("\n%a\t%-11a\t",a.hoten,a.mssv);
	if (a.gt=='x')
	   printf("Nam\t");
	else
	   printf("Nu\t");
	xuatngaysinh(a.ngth);
	printf("\t%-8a\n",a.lop);
	   
}
int main()
{
	int a;
	sinhvien sv;
	nhapsinhvien(sv);
	xuatsinhvien(sv);
	return 0;
}



























