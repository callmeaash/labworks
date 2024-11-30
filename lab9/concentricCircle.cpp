#include <graphics.h>
#include <conio.h>

void drawConcentricCircles(int x, int y, int maxRadius, int step) {
    for (int r = step; r <= maxRadius; r += step) {
        circle(x, y, r);
}

int main() {
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = getmaxx() / 2;  // X-coordinate of center (center of screen)
    int y = getmaxy() / 2;  // Y-coordinate of center (center of screen)

    int maxRadius = 100;
    int step = 20;

    drawConcentricCircles(x, y, maxRadius, step);

    getch();
    closegraph();

    return 0;
}
