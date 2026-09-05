#include<stdio.h>
int main()
{
    float area,height,base;
    printf("Enter Base:\n");
    scanf("%f",&base);
    printf("Enter height:\n");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("The area of triangle is:%f\n",area);
}
