#include <stdio.h>
#include <stdlib.h>
void set_color(const char *color) {
    char cmd[512];
    sprintf(cmd, "echo|set /p=\"\e[%sm\"", color);
    system(cmd);
}
int main() {
	
printf(" _   _   ___  ______________   __ ______ ___________ _____ _   _  ______  _____   _______       \n");set_color("01;31");
printf("| | | | / _ \ | ___ \ ___ \ \ / / | ___ \_   _| ___ \_   _| | | | |  _  \/ _ \ \ / /  ___|      \n");set_color("01;31");
printf("| |_| |/ /_\ \| |_/ / |_/ /\ V /  | |_/ / | | | |_/ / | | | |_| | | | | / /_\ \ V /\ `--.         \n");set_color("01;31");
printf("|  _  ||  _  ||  __/|  __/  \ /   | ___ \ | | |    /  | | |  _  | | | | |  _  |\ /  `--. \         \n");set_color("01;31");
printf("| | | || | | || |   | |     | |   | |_/ /_| |_| |\ \  | | | | | | | |/ /| | | || | /\__/ /        \n");set_color("01;31");
printf("\_| |_/\_| |_/\_|   \_|     \_/   \____/ \___/\_| \_| \_/ \_| |_/ |___/ \_| |_/\_/ \____/          \n");set_color("01;31");
set_color("0");
}








