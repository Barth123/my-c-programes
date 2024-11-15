//c program to show structures
#include<stdio.h>

struct vehicle
{
int wheels;
char vname[20];
char colour[10];
}
v1={4,"nano","red"};
int main ()
{
    printf("vehicle number of wheels:%d",v1.wheels);
    printf("vehicle name: %s",v1.vname);
    printf("vehicle color   :")
    return 0;


}
