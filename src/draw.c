#include "main.h"

/**
 * drawLine - function draws a line
 * @x0: x coordinate init
 * @y0: y coordinate init
 * @x1: x coordinate init
 * @y1: y coordinate end
 * @color: pixel color
*/
void drawLine(int x0, int y0, int x1, int y1, color_t color)
{
	int deltaX = x1 - x0;
    int deltaY = y1 - y0;
    int steps = max(abs(deltaX), abs(deltaY));
    
    float xIncrement = deltaX / (float)steps;
    float yIncrement = deltaY / (float)steps;
    
    float currentX = x0;
    float currentY = y0;
    
    for (int i = 0; i <= steps; i++) {
        drawPixel(round(currentX), round(currentY), color);
        currentX += xIncrement;
        currentY += yIncrement;
    }
}

/**
 * drawRectangle - function draws a rectangle
 * @x: x coordinate
 * @y: y coordinate
 * @width: rectangle width
 * @height: rectangle height
 * @color: pixel color
*/
void drawRectangle(int x, int y, int width, int height, color_t color)
{
	int i, j;

	for (i = x; i <= (x + width); i++)
		for (j = y; j <= (y + height); j++)
			drawPixel(i, j, color);
}