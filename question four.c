#include<stdio.h>
int main()
{
    //c program to show one if is eligible to vote
    int age;
    printf("enter any age");
    scanf("%d", &age);
    if(age>18)
    {
        printf("Eligible to vote");
    }

    else

    {
        printf("not eligible to vote");
    }
    return 0;
}
