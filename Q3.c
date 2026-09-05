#include<stdio.h>
int main()
{
float km,m,cm;
printf("Enter the distance in kilometers:\n");
scanf("%f",&km);
m=km*1000;
cm=km*1000*100;
printf("The distance in meter is:%f\n",m);
printf("The distance in centimeter is:%f\n",cm);

}
