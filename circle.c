#include <stdio.h>
// Program : CircleFeatures
// Purpose : A program that finds the diameter, circumference and area values of a circle with the entered radius value.
// Author : Duran Duman
// Date : 11.03.2022

void Circle(float radius);

int main(){
    
    float radius; 
    printf("Please enter the radius of your circle : ");
    scanf("%f",&radius);
    Circle(radius);
}

void Circle(float radius){
// Calculates the diameter ,circumference and area of a circle by looking at entered radius value.
// Parameters : radius - user's circle's radius.
    
    float diameter=radius * 2; 
    float circumference= diameter * 3.14159;
    float area= 3.14159 * radius* radius;
    printf("The diameter of your circle is %f \n", diameter);
    printf("The circumference of your circle is %f \n", circumference);
    printf("The area of your circle is %f", area);
    
    
}