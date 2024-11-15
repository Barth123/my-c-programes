#include<stdio.h>
int main ()
{
    int ar[5];
    int i;
    for (i=0;i<5;i++)
    {
        prinf("\n Enter marks in ",i,"subject");
        scanf("%d",&ar[i]);
    }
    printf("marks in 2nd subject is:",ar[1]);
    printf("marks in 5th subject is:",ar[4]);
    printf("marks in 3rd subject is:",ar[2]);
    printf("marks in 1st subject is:",ar[3]);
    printf("marks in 4 subject is:",ar[5]);
    return 0;

}
