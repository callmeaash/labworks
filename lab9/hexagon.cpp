#include <graphics.h>
#include <math.h>
#include <conio.h>

void drawHexagon(int centerX, int centerY, int radius) {
    int points[14];

    for (int i = 0; i < 6; i++) {
        points[2 * i] = centerX + radius * cos(2 * M_PI * i / 6);
        points[2 * i + 1] = centerY + radius * sin(2 * M_PI * i / 6);
    }
    
    points[12] = points[0];
    points[13] = points[1];

    drawpoly(7, points);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = 320, centerY = 240, radius = 100;

    drawHexagon(centerX, centerY, radius);

    getch();
    closegraph();
    
    return 0;
}
