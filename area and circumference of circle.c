#include<stdio.h>
//wap to find area and circumference of a circle
#define PI 3.14  //MACRO CONSTANT
main()
{
int rad;
printf("enter the radius\n");
scanf("%d",&rad);
double area=PI*rad*rad;
double circum=2*PI*rad;
printf("the area of circle is=%.2lf\n",area);
printf("the circumference of circle us=%.2lf\n",circum);
}
