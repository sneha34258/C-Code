// write functions to calculate area of square, circle , rectangle 
#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
int main(){
    float a = 5.0;
    float b = 10.0;
    float side = 2;
    printf("area is : %f\n", rectangleArea(a,b));
    printf("area is : %f\n", squareArea(side * side));
  
   return 0;
 }

 float squareArea(float side){
    return side * side;
 }

 float circleArea(float rad){
    return 3.14 * rad * rad;
 }

 float rectangleArea(float a, float b){
    return a * b;
 }