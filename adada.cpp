#include<stdio.h>

void Nhapmang(int a[100][100],int &m,int &n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}printf("\n");
}
void xuatmang(int a[100][100], int m , int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		 printf("%4d",i,j);
	}
}

int main ()
{
	int m,n;
	int a[100][100];
	Nhapmang(a,m,n);
	xuatmang(a,m,n);
	return 0;
}



