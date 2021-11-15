#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
struct date
{
	unsigned char ngay;
	unsigned char thang;
	int nam;
};
typedef struct sinhvien
{
	char ma[11];
	char hoten[31];
	struct date ngth;
	char gt;
	char lop[5];
	float dtb;
}sv;

void Nhapngaysinh(date &d)
{
	    printf("\nNhap vao ngay:");
	scanf("%u",&d.ngay);
		printf("\nNhap vao thang:");
	scanf("%u",&d.thang);
		printf("\nNhap vao nam:");
	scanf("%d",&d.nam);
}
void Xuatngaysinh(date d)
{
	printf("%02u / %02u / %4d",d.ngay,d.thang,d.nam);
}
//nhap thong tin 1 sv
void Nhap1sv (sv &s)
{
	printf("\nNhap ma so sinh vien:");
	scanf("%s",&s.ma);
	printf("\nNhap ho va ten:");
	fflush(stdin);
	gets(s.hoten);
	printf("\nNhap ngay thang nam sinh");
	Nhapngaysinh(s.ngth);
	printf("\nNhap lop:");
	scanf("%s",&s.lop);
	
	do{
		printf("\nNhap gioi tinh Nu-x, y-Nam:");
		s.gt=getche();
	}while(s.gt!='x' && s.gt!='y');
	
	printf("\nNhap vao diem trung binh:");
	scanf("%f", &s.dtb);
}
void Xuat1sv (sv s)
{
	printf("\n%-11s\t%-30s\t",s.ma,s.hoten);
	if (s.gt=='x')
	   printf("Nu\t");
	else
	   printf("Nam\t");
	Xuatngaysinh(s.ngth);
	printf("\t%-8s\t%.1f\n",s.lop,s.dtb);
	   
}

void Nhapsl(int &n)
{
	do{
		printf("\nnhap vao so nguyen sinh vien \t:");
		scanf("%d",&n);
		if (n<0)
		printf("\nVui long nhap so >0");
		
	}while(n<0);
}
void Nhapds(sv a[], int n)
{
	printf("\nNhap Danh Sach Sinh Vien\n");
	for (int i=0; i<n; i++)
	{
		printf("\nNhap sinh vien thu %d\n",i+1);
		Nhap1sv(a[i]);
		
	}
}

void Xuatds (sv a[], int n)
{
	printf("\nDanh Sach Sinh Vien\n");
	 for(int i=0;i<n;i++)
	 Xuat1sv(a[i]);
}

void Xuatdsdiem5 (sv a[], int n)
{
	 for (int i=0; i<n;i++)
	 {
	 	if (a[i].dtb>5)
	 	{
	 		Xuat1sv(a[i]);
		 }
	 }
}
bool sosanhkhoa (char lop[], char ma[])
{
	int length = strlen(lop);
	char khoa[3] = { lop[length-2], lop[length-1]};
	if (strcmp(khoa, ma)==0) return true;
	return false;
}

void XuatdssvCNTT (sv a[], int n)
 {
 	printf("\n DS sv nganh CNTT");
 	char CNTT [] = "CN";
 	for (int i=0;i<n;i++)
 	{
 		if(sosanhkhoa(a[i].lop, CNTT)){
 			Xuat1sv(a[i]);
		 }
	 }
 }
 void Xuatdssvnu (sv a[], int n)
 {
 	int count=0;
 	{
 		for (int i=0;i<n;i++)
 		
 			if (a[i].gt=='y')
 			{
 				count++;
			 }
	 }printf("\n So luong sv nu la : \t %d",count);
 }
 float maxdtb(sv a[], int n)
 {
 	float max= a[0].dtb;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i].dtb>max)
 		max = a[i].dtb;
	 }
	 return max;
 }
 void svmaxdtb(sv a[],int n)
{
	float max =maxdtb(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i].dtb==max)
		Xuat1sv(a[i]);
	}
}
 void themsv( sv a[],int n, sv svmoi)
 {
 	a[n]=svmoi;
 	n++;
}
void timsvXvaxoa(sv a[] ,int &n,char ma[11])
{
	int count =-1;
	for(int i=0; i<n;i++)
	{
		if(strcmp(a[i].ma,ma)==0)
		{
			count =i;
			break;
		}
	} if(count !=-1)
	{
		for( int i=count;i<n;i++)
		{
			a[i]=a[i+1];
		}n--;
	}
}

int main()
{
	
	int n;
	sinhvien sv;
	Nhap1sv(sv);
	Xuat1sv(sv);
	sinhvien a[MAX];
	Nhapsl(n);
	Nhapds(a,n);
	Xuatds(a,n);
	Xuatdsdiem5(a,n);
	XuatdssvCNTT(a,n);
	Xuatdssvnu(a,n);
	
	maxdtb(a,n);
	svmaxdtb(a,n);
	sinhvien svmoi;
	printf("\n nhap sinh vien moi");
	Nhap1sv(svmoi);
	themsv(a,n,svmoi);
	char ms[11];
	printf("\n nhap ma so sv can xoa :");
	scanf("%s",&ms);
	timsvXvaxoa(a,n,ms);
	Xuatds(a,n);
	return 0;
}
