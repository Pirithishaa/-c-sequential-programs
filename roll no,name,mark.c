#include<stdio.h>
int main()
{
    int rno,s1=98,s2=99,s3=95,s4=94,s5=99,total,average;
    char name[20];
    printf("Enter your Name");
    scanf("%s",&name);
    printf("Enter your rno");
    scanf("%d",&rno);


    total=s1+s2+s3+s4+s5;
    average=(s1+s2+s3+s4+s5)/5;
    printf("Total marks:%d \n",total);
    printf("Average:%d\n",average);
}

