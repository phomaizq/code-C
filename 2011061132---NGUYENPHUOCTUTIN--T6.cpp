#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct sach
{
	char masach[10];
	char tensach[40];
	long gia;
}sach;
void nhap1sach (sach *a)
{	
	printf("\nnhap ten sach :");
	fflush(stdin);
	gets(a->tensach);
	printf("\nnhap ma sach :");
	scanf("%s",&a->masach);
	printf("\nnhap gia sach :");
	scanf("%ld",&a->gia);
}
void xuat1sach (sach *a)
{	
	printf("\nten sach: %s",a->tensach);
	printf("\nma sach: %s",a->masach);
	printf("\ngia sach: %ld",a->gia);
	
	
}
void nhapds (sach *a,int n)
{	
	
	for( int i=0;i<n;i++)
		{
			printf("\nsach thu %d:",i+1);
			nhap1sach((a+i));
		}
		
}
void xuatds (sach *a,int n)
{
		for(int i=0;i<n;i++)
		{
			printf("\nsach thu %d:",i+1);
			xuat1sach((a+i));
		}
}

int main ()
{
	sach *a;
	a=(sach*)malloc(100);	
		do
	{
		printf("nhap so sach:");
		scanf("%d",&n);
		if(n<0||n>100)
			printf("nhap sai nhap lai ");
	}while(n<0||n>100);
	nhapds(a,n);
	xuatds(a,n);	
	return 0;
	
}
