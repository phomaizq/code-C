#include<stdio.h>
void nhap(int a[],int n)
{
		do{
		printf("nhap n phan tu  :");
		scanf("%d",&n);	
	}while(n<0 || n>100);
	for (int i=0;i<n;i++)
	{
		printf("nhap vao phan tu a[%d]:",i);
		scanf("%4d",&a[i]);	
	}

}
void  xuat(int a[],int n)
{
	 printf("mang vua nhap la :\n");
	 for(int i=0;i<n;i++)
	 {
	 	printf("%5d",a[i]);
	 }
}
int ktshh(int n){
    int tong =0;
    for(int i=1 ;i<=n/2;i++)
	{
    	if(n%i==0)
    		tong =tong+i;
	}   	
	if(tong==n)
		return 1;
	else
		return 0;
}
float tinhtb(int a[],int n)
{
	float tb =0 ,tong=0;
	int dem =0;
	for(int i=0;i<n;i++)
	{
		if(ktshh(a[i])){
			tong =tong+a[i];
			dem++;
		}
	}if(dem==0)
	{
		return 0;
	}else
	{
		tb = tong/dem;
		return tb;
	}
	
	
}
int main ()
{
	int a[100],n;
	printf("nhap vao so luong phan tu :");
	scanf("%d",&n);
	nhap(a,n);
	xuat (a,n);
	
	tinhtb(a,n);
	printf("\ntong trung binh ca so nguyen to  la %0.2f",tinhtb(a,n));
	return 0;
}
