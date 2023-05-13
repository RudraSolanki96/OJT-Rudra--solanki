#include<stdio.h>
//convert celcius to farnhit using function

float convertTemp(float celcius);

int main()
{
float f;
printf("enter temp in celcius :");
scanf("%f",&f);
printf("farnhit is : %f\n",convertTemp(f));

 return 0;   
}

float convertTemp(float celcius){
    float far = celcius*(9.0/5.0)+32;
    return far;
}