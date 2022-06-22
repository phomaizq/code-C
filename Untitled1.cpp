#include<stdio.h>
#include<conio.h>
#include<math.h>
struct sinhvien
{
	char ten [100];
	char mssv[11];
	char lop[8];
	char gt;
	int ntns;
	float toan,ly,tin,DTB;	
};
typedef struct sinhvien sv;
void nhap1sv(sv &a)
{
	printf("\nnhap ten sinh vien :");
	fflush(stdin);
    gets(a.ten);
	printf("\nnhap ma so sinh vien :");
	fflush(stdin);
	scanf("%s", &a.mssv);
	printf("\nnhap lop ");
	scanf("%s", &a.lop);
	printf("\nnhap nam sinh ");
	scanf(" %d", &a.ntns);
	do
	{
		printf( "\n nhap gio tinh Nu/x, Nam/y :");
		a.gt=getche();
	}while(a.gt!='x' && a.gt!='y');
	printf("\n nhap diem toan :");
	scanf(" %f",&a.toan);
	printf("\n nhap diem ly :");
	scanf(" %f",&a.ly);
	printf("\n nhap diem tin :");
	scanf(" %f",&a.tin);
	a.DTB= (a.toan +a.ly +a.tin)/3 ;
}
void xuat1sv(sv a)
{
	printf("\nten sinh vien :%s",a.ten);
	printf("\nma so sinh vien:%s",a.mssv);
	printf("lop ");
	puts(a.lop );
	if(a.gt=='x')
		printf("gioi tinh : Nu");
	else
		printf("gioi tinh : Nam");
	printf("\nngay thang nam sinh : %d", a.ntns);
	printf("\ndiem toan: %f", a.toan);
	printf("\ndiem ly: %f", a.ly);
	printf("\ndiem tin: %f", a.tin);
	printf("\ndiem TB: %f", a.DTB);
}
void nhapdssv(sv a[] , int n)
{ 
for( int i=0;i<n;i++)
 {
	printf("\tnhap sinh vien thu :%d",i+1);
	printf("\n");
	nhap1sv(a[i]);
 } 
}
void xuatdssv(sv a[] , int n)
{ 
for( int i=0;i<n;i++)
 {
	printf("sinh vien thu:%d",i+1);
	nhap1sv(a[i]);
 } 
}

int main()
{
	int n;
	sinhvien sv;
	nhap1sv(sv);
	xuat1sv(sv);
	sinhvien a[100];
	printf("\nnhap so luong sanh dien :");
	scanf("%d", &n);
	nhapdssv(a,n);
	xuatdssv(a,n);
	return 0;	
}







