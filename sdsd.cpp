#include<stdio.h>
void nhapn(int n)

{
	do {
		printf("nhap so luong phan tu : ");
		scanf("%d",&n);	
	}while(n<0 || n>100);
}
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nnhap so luong phan tu a[%d] :",i);
		scanf("%4d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("%4d ",a[i]);
	}
}
int vitriphantu(int a[],int n)
{
	int vitrilonnhat = a[0];
	
	for(int i=0;i<n;i++)
		{
			if(vitrilonnhat < a[i]){
				vitrilonnhat=a[i];
			}	
		}
	return vitrilonnhat;
}
void timvitrilonnhat(int a[],int n)
{
	int vitrilonnhat = 	vitriphantu(a,n);
	printf("\n vi tri phan tu lon nhat :");
	for(int i=0;i<n;i++)
	{
		if(vitrilonnhat == a[i])
		{
			printf("%5d",i+1);
		}
	}
}
int main ()
{
	int a[100],n;
	printf("nhap vao so luong phan tu :");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	timvitrilonnhat(a,n);
	return 0;
}
