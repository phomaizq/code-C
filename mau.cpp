#include <stdio.h>
#include <windows.h>
#include<conio.h>
void set_color( int code ) {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( color , code );
}
void set_color(const char *color) {
    char cmd[512];
    sprintf(cmd, "echo|set /p=\"\e[%sm\"", color);
    system(cmd);
}
int main(){
    set_color( 0 << 10 | 0 << 4 | 7);
    system("CLS");
    set_color( 3 << 10 | 1 << 4 | 11);
    printf("  ####    #   #    #  #   # #   #   #   #   #   #   #  ###   ###    \n");Sleep(70);
    printf("  #   #  # #   #  #   ##  # #   #  # #  #   #   #   # #   # #   #   \n");Sleep(70);
    printf("  #   # #####   ##    # # # ##### ##### #   #   ##### #   # #       \n");Sleep(70);
    printf("  #   # #   #   ##    #  ## #   # #   # #   #   #   # #   # #   #   \n");Sleep(70);
    printf("  ####  #   #   ##    #   # #   # #   # #####   #   #  ###   ###    \n");Sleep(70);
    printf("          #                                             #           \n\n");Sleep(70);
    set_color( 1 << 10 | 0 << 4 | 10);
    printf("===============================\n");
    Sleep(70);
    printf("<1>. Hack daynhauhoc.com       \n");Sleep(70);
    printf("<2>. Quit                      \n");Sleep(70);
    printf("===============================\n");Sleep(70);
    printf("[ Select ]:");Sleep(70);
    ///////
    set_color("01;31");
    printf("Red ");
    set_color("01;33");
    printf("and ");
    set_color("01;32");
    printf("Green\n");
    set_color("0");
    getchar();
    return 0;
}
