#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(void) {
    int gd = DETECT, gm;
    char *path = "C:\\MinGW\\BGI";
    initgraph(&gd, &gm, path);
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;
    system("cls");

    line(x1, y1, x2, y2);
    getch();
    closegraph();
}
