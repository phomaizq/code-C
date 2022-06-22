#include<stdio.h>
#include<conio.h>
#include<math.h>
  void Nhap (int &n)
  {  
    do{
    	printf("nhap so phan tu (0<n<=100):");
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
	int MaxElement(int a[], int n){
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}
 
void GetMaxPosition(int a[], int n){
    int maxValue = MaxElement(a, n);
    printf("\nVi tri cua phan tu lon nhat:\t");
    for(int i = 0; i < n; i++){
        if(a[i] == maxValue){
            printf("%5d", i + 1);
        }
    }
}
void xoa1vitrik(int a[],int n)
{
 int k;
 printf("\nnhap vi tri can xoa: ");
 scanf("%d",&k);
 for(int i=0;i<n;i++)
  a[k]=a[k+1]; 
 n=n-1; 
 Xuatmang(a,n);   
}

 void duongcuoicung(int a[],int n)
   {
   	 printf("\nPhan tu duong cuoi cung :");
	printf("a[%d] = %d \t",n-1,a[n-1]);	 
   }
int main()
	{
    int a[100];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    Nhapmang(a, n);
    Xuatmang(a, n);
    GetMaxPosition(a,n);
    xoa1vitrik(a,n);
    duongcuoicung(a,n); 
    getch();
    return 0;
}


