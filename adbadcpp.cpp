#include <iostream>
using namespace std;
void xuat(int a[][50],int n,int m);
void count(int a[][50],int b[][50],int n,int m);
int boom(int a[][50],int x,int y,int n,int m);
int main()
{
	int a[50][50],n,m,b[50][50];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	count(a,b,n,m);
	xuat(b,n,m);
}


void count(int a[][50],int b[][50],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
				b[i][j]=9;
			else
				b[i][j]=boom(a,i,j,n,m);
		}
	}
}

void xuat(int a[][50],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int boom(int a[][50],int x,int y,int n,int m)
{
	int X[8]={-1,-1,-1,0,1,1,1,0};
	int Y[8]={-1,0,1,1,1,0,-1,-1};
	int dem=0;
	for(int i=0;i<8;i++)
	{
		int q=x+X[i];
		int w=y+Y[i];
		if(q>=0&&q<n&&w>=0&&w<m&&a[q][w]==1)
			dem++;
	}
	return dem;
}

