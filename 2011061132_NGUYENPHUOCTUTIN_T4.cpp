#include<stdio.h>
void nhapMang(int a[], int n)
{
    if(n>0){
    	
        nhapMang(a, n-1);
        printf("\nNhap vao phan tu thu %d:", n);
        scanf("%d", &a[n]);
    }
}

void xuatMang(int a[], int n)
{
    if(n>0){

        xuatMang(a, n-1);
        printf("%d ", a[n]);
    }
}
int TongCacPhanTu(int a[], int n)
{
	if( n == 1)
	{
		return a[1];
    }
	return (a[n-1]+TongCacPhanTu(a,n-1));
}


int main()
{
	int a[100];
	int n;
	printf("\nnhap vao so n : ");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	printf("\ntong cac phan tu tren mang la : %d",TongCacPhanTu(a,n));
	
	
}
