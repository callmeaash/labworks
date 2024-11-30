#include <graphics.h>
#include <conio.h>

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}
int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
	
    int x1 = 150, y1 = 150, x2 = 250, y2 = 150, x3 = 150, y3 = 50;
    drawTriangle(x1, y1, x2, y2, x3, y3);
	
    int x4 = 150, y4 = 150, x5 = 300, y5 = 250, x6 = 150, y6 = 250; 
	drawTriangle(x4, y4, x5, y5, x6, y6);
	getch();
   	
    closegraph();

    return 0;
}
