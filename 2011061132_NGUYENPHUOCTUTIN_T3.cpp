#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
struct motcuonsach
{
	char tensach [100];
	char masach[11];
	long giasach[100];		
};
typedef struct motcuonsach sach;
void nhap1cuonsach(sach*a)
{
	printf("\nnhap ten sach :");
	fflush(stdin);
    gets(a->tensach);
	printf("\nnhap ma sach :");
	fflush(stdin);
	scanf("%s", a->masach);
	printf("\nnnhap gia sach :");
	scanf("%ld",a->giasach );
	
}
void xuat1cuonsach(sach *a)
{
	printf("\n%s,\t%s\t%s",a->tensach,a->masach,a->giasach);
}

int main()
{
	sach a[100];
	motcuonsach sach;
	nhap1cuonsach(a);
	xuat1cuonsach(a);
	
	return 0;	
}







