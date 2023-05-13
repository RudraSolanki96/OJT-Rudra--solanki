#include<stdio.h>

float fact(float n);


int main()

//factorial trick using RECURSION 

{
    float n;
    printf("enter a number :");
    scanf("%f\n",&n);
    printf("factorial is : %f\n",fact(n));
    return 0;

}

float fact (float n){
    if(n==0){//if condition requred for BASE CASE,this is most important other wise program will crush
        return 1;
    }
    float nm1= fact(n-1);
    float factn= nm1*n;

    return factn;
}