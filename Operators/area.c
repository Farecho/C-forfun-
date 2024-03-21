#include <stdio.h>
#include <math.h>
#define PIE 3.142

int main(){
    double radius, height , circumference, rectangle, cylinderPerimeter, areaCircles, areaRectangle, cylinderArea ;
    printf("Enter your radius : \n");
    scanf("%lf", &radius);

    printf("Enter your height : \n");
    scanf("%lf", &height);

    circumference = PIE * 2 * radius;
    rectangle = 2 * height;
    cylinderPerimeter = rectangle + circumference * 2 ;

    printf("The perimeter of the cylinder is : %lf \n", cylinderPerimeter);

    // areaCircles = 2 * PIE * radius * radius;
    areaCircles = 2 * PIE * pow(radius, 2);
    areaRectangle = height * circumference;
    cylinderArea = areaCircles + areaRectangle;

    printf("The area of the cylinder is : %lf \n", cylinderArea);

    double number, squareRoot ;
    printf("Enter your number : \n");
    scanf("%lf", &number);
    squareRoot = sqrt (number) ; 
    printf("The square root of %lf is : %lf \n", number, squareRoot);


return 0;
}