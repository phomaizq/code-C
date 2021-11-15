#include<stdio.h>
void nhap(int a[],int n)
{
	
	for (int i=0;i<n;i++)
	{
		printf("nhap vao phan tu a[%d]:",i);
		scanf("%d",&a[i]);	
	}
	printf(" mang vua nhap la : \n");	
}
void  xuat(int a[],int n)
{ 	
	 
	 for(int i=0;i<n;i++)
	 {
	 	printf("%4d",a[i]);	 	
	 } 	
}

//Ham sap xep thu 2 khong dung bien trung gian
/* void SortUp2(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    printf("\nMang sau khi sap xep tang:\n");   
    xuat(a,n);  
}*/
//Ham sap xep thu nhat su dung bien trung gian
void SortUp(int a[], int n){
    int Mid;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                Mid=a[i];
                a[i]=a[j];
                a[j]=Mid;
            }
        }
    printf("\nMang sau khi sap xep:\n");
    xuat(a,n);
}
int main(){
    int a[100];
    int n;
    printf("nhap vao so luong phan tu :");
	scanf("%d",&n);
    nhap(a,n); 
	xuat(a,n);
	//SortUp2(a,n);
	SortUp(a,n);
    return 0;
}
