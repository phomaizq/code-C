#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<Windows.h>
#include <mmsystem.h>


void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
char c, a, b, d, e, g;
void ham1()
{
	FILE *F;
	F = fopen("hienthai2.txt", "r");
	while (c != EOF)
	{
		c = fgetc(F);
		Sleep(2);//35
		textcolor(2);
		printf("%c", c);
	}fclose(F);
}
void ham2()
{
	FILE *F;
	F = fopen("hienthai7.txt", "r");
	while (a != EOF)
	{
		a = fgetc(F);
		Sleep(2);//70
		textcolor(11);
		printf("%c", a);
	}fclose(F);
}
void ham3()
{
	FILE *F;
	F = fopen("hienthai4.txt", "r");
	while (b != EOF)
	{
		b = fgetc(F);
		Sleep(2);//50
		textcolor(14);
		printf("%c", b);
	}fclose(F);
}
void ham4()
{
	FILE *F;
	F = fopen("hienthai5.txt", "r");
	while (d != EOF)
	{
		d = fgetc(F);
		Sleep(2);//100
		textcolor(1);
		printf("%c", d);
	}fclose(F);
}
void ham5()
{
	FILE *F;
	F = fopen("hienthai3.txt", "r");
	while (e != EOF)
	{
		e = fgetc(F);
		Sleep(2);//30
		textcolor(12);
		printf("%c", e);
	}fclose(F);
}
void ham6()
{
	FILE *F;
	F = fopen("hienthai8.txt", "r");
	while (g != EOF)
	{
		g = fgetc(F);
		Sleep(2);//100
		textcolor(13);
		printf("%c", g);
	}fclose(F);
}
int main()
{
    SetConsoleOutputCP(65001);
	ham4();
	ham1();
	ham3();
	ham5();
	ham2();
	ham6();
	getch();
	return 0;
}
