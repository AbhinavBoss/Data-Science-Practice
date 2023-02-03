#include <stdio.h>
#include <math.h>
int main()
{   
    int n;
    printf("Enter as per your choice\n 1->Area of circle 2-> Perimeter of circle 3->Area of square ");
    printf("\n 4->Perimeter of a square 5->Area of a triangle 6->Perimeter of a triangle 7->Exit \n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        int r;
        float area;
        printf("Enter radius of circle: ");
        scanf("%d",&r);
        area=3.14*r*r;
        printf("Area of circle having radius %d unit is %.2f square units",r,area);
        break;
    case 2:
        int a;
        float cir;
        printf("Enter radius of circle: ");
        scanf("%d",&a);
        cir=2*3.14*a;
        printf("Circumference of circle having radius %d unit is %.2f units",a,cir);
        break;
    case 3:
        float r1;
        float area2;
        printf("Enter side of the square: ");
        scanf("%f",&r1);
        area2=r1*r1;
        printf("Area of square having radius %.2f unit is %.2f square units",r1,area2);
        break;
    case 4:
        float r2,perimeter;
        printf("Enter side of the sqaure: ");
        scanf("%f",&r2);
        perimeter=4*r2;
        printf("Perimeter of square having side %.2f unit is %.2f units",r2,perimeter);
        break;   
    case 5:
        float a1,b,c,sp,area3;
        printf("Enter first side: ");
        scanf("%f",&a1);
        printf("Enter second side: ");
        scanf("%f",&b);
        printf("Enter third side: ");
        scanf("%f",&c);
        sp=a+b+c/2;
        area3=sqrt((sp-a1)*(sp-b)*(sp-c)*sp);
        printf("The area of triangle with sides %.2f , %.2f and %.2f is %.2f",a1,b,c,area3);
    case 6:
        float x,y,z,perimeter2;
        printf("Enter first side: ");
        scanf("%f",&x);
        printf("Enter second side: ");
        scanf("%f",&y);
        printf("Enter third side: ");
        scanf("%f",&z);     
        perimeter2=x+y+z;
        printf("The perimeter of triangle having sides %.2f , %.2f and %.2f units is %.2f units",x,y,z,perimeter2);
    case 7:
        break;
    default:
        break;
    }
    return 0;
}