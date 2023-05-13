#include<stdio.h>
int main()
{
    int n;

    do{
        printf("enter only even number : ");
        scanf("%d",&n);
        printf("%d\n",n);
      
      if(n%2!=0){
        break;
      }

    }while(1);

    printf("this is not even number \n");

    return 0 ;


    
}