#include<graphics.h>
#include<conio.h>
int main()
{
    int gd= DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    circle(100,100,50);
    getch();
    return 0;
}