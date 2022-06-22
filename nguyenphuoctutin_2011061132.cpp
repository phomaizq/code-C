#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define R 100
#define MIN 1
//nguyenphuoctutin-2011061132(phomai)
void nhapMaTran(int a[100][100], int &d, int&c)
{
	do{
		printf(" nhap so dong va so cot :");
		scanf("%d%d", &d,&c);
	}while(d<=0 ||c<=0);
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("[%d%d]=",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatMaTran(int a[100][100], int d, int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t", a[i][j]);	
		}
		printf("\n");
	}
}
int TinhTong(int a[100][100], int d , int c){
	int tong = 0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			tong +=a[i][j];
		}
	}
	return tong;
}
void trungbinhcongduong(int a[100][100], int d, int c)
{
	int dem =0 , tong=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j] >0)
			{
				tong +=a[i][j];
				dem++;
			}
		}
	}
}
bool kiemtraSCP(int n)
{
double x=sqrt (n);
if(x-int(x)==0)
return true;
return false;
}
void tongCP( int a[100][100], int d,int c)
{
	int tong=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(kiemtraSCP(a[i][j])==true)
			tong+=a[i][j];		
		}
	}
	printf("\ntong so chinh phuong la %d: ",tong);
	
}
void xuatdongk(int a[100][100],int d, int c)
{
	int k;
	printf("\n nhap vao so dong k :");
	scanf("%d",&k);
	for(int i=0;i<c;i++)
	{
		printf("%d\t",a[k][i]);
	}
}

void tinhtongcotk(int a[100][100], int d ,int c)
{
	int k;
	printf(" \n nhap vao so cot k:");
	scanf("%d",&k);
	int tong=0;
	for(int i=0; i<d;i++)
	{
		tong+=a[i][k];
	}
	printf("\ntong cac phan tu cot %d la %d",k,tong);
	
}
void nhapmang(int a[100][100], int d, int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			a[i][j]=(rand()%(R-MIN+1))+MIN;
		}
	}
}
void xuatmang( int a[100][100], int d,int c)
{
	for(int i=0;i<d;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}
}
void duongcheochinh(int a[100][100], int d,int c)
{
	printf("\nin duong cheo chinh  cua ma tran : ");
	printf("\n");
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j)
		       printf("%d\t",a[i][j]);
			else 
		    printf("\t");
		}printf("\n");
	}
}
void duongcheophu(int a[100][100], int d,int c)
{
	printf("\nin duong cheo phu  cua ma tran : ");
	printf("\n");
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i+j==d-1)
		       printf("%d\t",a[i][j]);
			else 
		    printf("\t");
		}printf("\n");
	}
}
void tongdong(int a[100][100],int d, int c)
{
	int s=0;
	int k;
	printf(" nhap k");
	scanf("%d", &k);
	for(int i=0;i<d;i++)
	{
	s+=a[k][i];
	}
	printf(" tong phan tu ten dong %d la %d",k,s);
}
void tongphantutrendong(int a[100][100],int d,int c)
{
	int max =0,
	sodong=0;
	for(int i=0;i<d;i++)
	{
		int tong =0;
		for(int j;j<c;j++)
		{
			tong +=a[i][j];
		}if(i==0) max = tong;
		if(tong>max)
		{
			max = tong;
			sodong=i;
		}
	}printf( "tong phan tu tren dong %d la %d ",i,tong);
}
int main()
{    
  
	int a[100][100];
	int d,c;
/*	nhapMaTran(a,d,c);
	xuatMaTran(a,d,c);
	int tong=TinhTong(a,d,c);
	printf("\n tong ma tran la %d \t",tong);
	printf("\n");
	float tbc =(float) tong/(d*c);
	printf("\ntrung binh cong cua ma tran la %f :", tbc);
	tongCP(a,d,c);
	xuatdongk(a,d,c);
	tinhtongcotk(a,d,c);*/
	c=5;
	nhapmang(a,c,c);
	xuatmang(a,c,c);
	duongcheochinh(a,c,c);
	duongcheophu(a,c,c);
	tongdong(a,c,c);
	tongphantutrendon(a,c,c);
}
