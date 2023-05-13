#include<stdio.h>

void male();
void female();
void other();
int main()
{
  char ch;
  printf("enter male for 'm' and female for 'f'\n");
  scanf("%c",&ch);
  
  if(ch=='m'){
     male();
  }
  else if(ch=='f'){
     female();
  }
  else{
    other();
  }



    return 0;
}

void male(){
    printf("you are male person \n");
}

void female(){
    printf("you are female person \n");
}

void other(){
    printf("you are other person \n");
}