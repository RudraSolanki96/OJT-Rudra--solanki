#include<stdio.h>
//some calculation using function
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main()
{

  float a=5;
  float b=6;
  float side=7;
  float rad=3;

  printf("rectange's area is : %f  \n",rectangleArea(a,b));
  printf("circle's radius is %f \n",circleArea(rad));
  printf("sguare's area is %f \n",squareArea(side));


  return 0;
  
}


float squareArea(float side ){
    return side*side;
}

float circleArea(float rad){
    return 3.14*rad*rad;
}

float rectangleArea(float a, float b){
    return a*b;
}
