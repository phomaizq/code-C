#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<Windows.h>
#include <mmsystem.h>

void set_color( int code ) {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( color , code );
}
void set_color(const char *color) {
    char cmd[512];
    sprintf(cmd, "echo|set /p=\"\e[%sm\"", color);
    system(cmd);
}

char  c,a, b, d, e, g;
void ham1()
{
	FILE *F;
	F = fopen("h1.txt", "r");
	while (c != EOF)
	{
		c = fgetc(F);
		set_color("1;95");
		printf("%c", c);
	}fclose(F);
}
void ham2()
{
	FILE *F;
	F = fopen("h2.txt", "r");
	while (a != EOF)
	{
		a = fgetc(F);
		set_color("1;92");
		printf("%c", a);
	}fclose(F);
}
void ham3()
{
	FILE *F;
	F = fopen("h3.txt", "r");
	while (b != EOF)
	{
		b = fgetc(F);
		
		set_color("1;93");
		printf("%c", b);
	}fclose(F);
}
void ham4()
{
	FILE *F;
	F = fopen("h4.txt", "r");
	while (d != EOF)
	{
		d = fgetc(F);
		
		set_color("38;5;208");
		printf("%c", d);
	}fclose(F);
}
void ham5()
{
	FILE *F;
	F = fopen("h5.txt", "r");
	while (e != EOF)
	{
		e = fgetc(F);
		
		set_color("1;93");
		printf("%c", e);
	}fclose(F);
}
int main()
{
	SetConsoleOutputCP(65001);
	int n,m;
	printf("HOM NAY LA SINH NHAT CUA AI: ");	set_color("38;5;208");
	scanf("%d",&n);
	ham1();
	ham2();
	ham3();
	ham4();
	ham5();
	
}
