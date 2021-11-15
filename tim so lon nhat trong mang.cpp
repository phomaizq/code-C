#include<stdio.h>
void nhap(int n)
{
		do{
		printf("nhap n phan tu  :");
		scanf("%d",&n);	
	}while(n<=0 || n>100);
}
void nhapmang(int a[],int n)
	{
	for (int i=0;i<n;i++)
	{
		printf("nhap vao phan tu a[%d]:",i);
		scanf("%d",&a[i]);	
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
int max(int a[],int n)
{
	int max = a[0];
	{
		for(int i=1;i<n;i++)
		{
			if ( max<a[i])
				max=a[i];
		}return max;
	}
}	
//so nho nhat
int min(int a[],int n)
{
	int min = a[0];
	{
		for(int i=1;i<n;i++)
		{
			if( min>a[i])
				min=a[i];
		}return min;
	}
}
int main ()
{
	int a[100];
	int n;
	printf("nhap vao so luong phan tu :");
	scanf("%d",&n);
	nhapmang(a,n);
	xuat (a,n);
	printf("\nso lon nhat trong mang la %d ",max(a,n));
	printf("\nso lon nho trong mang la %d ",min(a,n));
	return 0;
}
