#include <stdio.h>
// Program to find the quadrant in which a point lies
int main()
{
  int x,y;
    printf("Input the coordinate(x,y) without brackets and comma: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>0 && y>0)
    printf("The coordinate point (%d,%d) lies in First Quadrant \n",x,y);
    else if (x<0 && y>0)
     printf("The coordinate point (%d,%d) lies in secound Quadrant\n ",x,y);
     else if (x<0 && y<0)
      printf("The coordinate point (%d,%d) lies in Third Quadrant \n",x,y);
      else if (x>0 && y<0)
       printf("The coordinate point (%d,%d) lies in Forth Quadrant\n ",x,y);
       return 0;
}       