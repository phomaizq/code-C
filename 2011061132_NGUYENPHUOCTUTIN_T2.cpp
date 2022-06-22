#include<stdio.h>
void nhapMaTran(int a[100][100], int &d, int &c){
	do{
		printf("Nhap vao dong va cot: ");
		scanf("%d%d", &d, &c);
	}while(d<=0 || c<=0);
	
	for(int i=0; i<d; i++){
		for(int j=0; j<c; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMaTran(int a[100][100], int d, int c){
	printf(" \n");
	for(int i=0; i<d; i++){
		for(int j=0; j<c; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
long TinhTong(int a[][100], int d ,int c)
{
    long s = 0;
    for (int i = 0; i < d; i++)
    for (int j = 0; j< c; j++ )
    
    if (a[i][j] % 2 == 0)
        {
            s =s+ a[i][j];
        }
    
    return s;
}
int main(){
	int a[100][100];
    int d,c;
	nhapMaTran(a, d, c);
	xuatMaTran(a, d, c);
    long s= TinhTong(a,d,c);
    printf("\n tong cac so chan la %ld",s);
    return 0;
}
