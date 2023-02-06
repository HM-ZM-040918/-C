#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int MENU(void)
{
    printf("*****************************\n");
    printf("**********play list**********\n");
    printf("***********1、play***********\n");
    printf("***********0、exit***********\n");
    printf("*****************************\n");
    int a;
    printf("*********play or exit********\n");
    scanf("%d", &a);    //给定数字是否参与游戏
    return a;   //将返回的数字用于循环判断
}
int num(void)
{
    srand((unsigned  int) time(NULL));  //随机非负数字
    int n = rand()%99+1;    //范围在0~100
    return n;   //将数字返回给主函数用于判断是否与随机数字相等
}
void loop(int a)
{
    int r = num();  //将随机数字赋予r
    while (a)
    {
        int b;
        printf("please input number: ");
        scanf("%d", &b);    //输入你猜的数字
        getchar();
        if (b == r) //如果正确
        {
            printf("you win!!!!\n");
            break;   //跳出本次循环
        }
        else    //不正确
        {
            if (b > r)  //猜的数字大于随机数
            {
                printf("you input > r\n");
            }
            else    //猜的数字小于随机数
            {
                printf("you input < r\n");
            }
            printf("try again\n");
        }
    }
}
int main()
{
    int a;
    do {
         a = MENU();
        switch(a)
        {
            case 1:
                loop(a);
                break;
            case 0:
                break;
            default:
                printf("try again number\n");
                break;
        }
    }while (a);
    printf("game over!\n");  //游戏结束
    system("pause");
    return 0;
}