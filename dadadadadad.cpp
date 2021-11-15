#include<stdio.h>
#include<conio.h>
#include<math.h>
  void Nhap (int &n)
  {  
    do{
    	printf("nhap so phan tu :");
    	scanf("%d",&n);
      }while(n<=0 || n>100);
  }
  void Nhapmang (int a[], int n)
   {
  for(int i=0;i<n;i++)
  	{
  	printf("\nNhap so phan tu a[%d]:",i);
  	scanf("%d", &a[i]);
    }  
  }
  void Xuatmang (int a[],int n)
    {  
       for(int i=0;i<n;i++)
         {
         	printf("%4d",a[i]);
		 }
	}
int main()
{

    int a[100];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    Nhapmang(a, n);
    Xuatmang(a, n);
	return 0;
}
