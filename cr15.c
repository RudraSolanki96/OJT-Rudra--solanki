//nested if else
#include<stdio.h>
int main()
{

  int number;
  printf("enter number : \n");
  scanf("%d",&number);

  if(number>=0){
    printf("this is possitive number \n");
    if(number%2==0){
        printf("this is also even number \n");
    
    }
    else{
        printf("but this is odd number \n");
    }
  }
  else{
    printf("this is nagetive number \n");
    if(number%2==0){
        printf("but this is even number \n");
    
    }
    else{
        printf("and this is odd number \n");
    }
  }
  return 0;

}