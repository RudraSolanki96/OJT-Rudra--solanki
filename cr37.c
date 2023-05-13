#include<stdio.h>
//finding fibonacci sseries number
//fibonacci series= 0,1,1,2,3,5,8,13,21,..
//like this first two is 0 and 1 ,,and third is first two's sum,,and continues

int fib(int n);


int main()
{
  printf("febonacci number is :%d\n",fib(8));

 return 0;   
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fibnm1=fib(n-1);
    int fibnm2 =fib(n-2);
    int fibn = fibnm1 + fibnm2;
    return fibn;
}