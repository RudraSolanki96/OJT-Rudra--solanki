#include<stdio.h>
//calculating percantage using function

int calPer(int math,int phy,int che);

int main()
{
    int math,phy,che;
printf("enter math's marks :\n");
scanf("%d",&math);


printf("enter phy's marks :\n");
scanf("%d",&phy);


printf("enter che's marks :\n");
scanf("%d",&che);

printf("percantage is : %d\n",calPer(math,phy,che));

 return 0;   
}

int calPer(int math,int phy,int che){
    return (math+phy+che)/3;
}