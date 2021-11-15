#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	char a[20],b[20];
  	printf("ghi ten ny ban vao :");
	gets(a);
	printf("Nhap ngay sinh :");
	gets(a);
	printf("\tTuyet voi =>>\n");
	for(int i=10;i<=100;i++)
	{
		
		printf("\t2Dang xu ly %d%%\n",i++);
  		Sleep(90);
		
	}	
	char s[1000];
	FILE* f = fopen("as.txt", "r");

	while (!feof(f))
 		{
			fgets(s, sizeof(s), f);
			
				printf("\t%s", s);
				Sleep(70);
		}
		
}
