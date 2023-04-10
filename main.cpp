#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

//    circle(200, 200, 100);
    rectangle(100, 100, 400, 400);
    outtextxy(250, 250, "BCA");
    getch();
    closegraph();

    return 0;
}
