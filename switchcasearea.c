#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float area, radius, s1,s2,s3,base,height,sp;
    int choice;
    printf("1. Area of Circle\n");
    printf("2. Area of Triangle(Base and Height)\n");
    printf("3. Area of Triangle(All three Sides)\n");
    printf("Select your Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("You have chosen Area of Circle\n");
        printf("Enter the radius\n");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("Area of Circle is %.2f\n",area);
        break;
    case 2:
        printf("You have chosen Area of Triangle(Base and Height)\n");
        printf("Enter base and height\n");
        scanf("%f%f",&base,&height);
        area=(base*height)/2;
        printf("Area of Triangle is %.2f\n",area);
        break;
    case 3:
        printf("You have chosen Area of Triangle(All three Sides)\n");
        printf("Enter values of all three sides\n");
        scanf("%f%f%f",&s1,&s2,&s3);
        sp=(s1+s2+s3)/2;
        area=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
        printf("Area of Triangle is %.2f\n",area);
        break;
    default:
        printf("Sorry, Invalid Choice\n");
    }
    printf("Thank You\n");
    return 0;
}
