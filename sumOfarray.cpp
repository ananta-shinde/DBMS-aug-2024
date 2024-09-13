#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        printf("enter a number");
        scanf("%d",&nums[i]);
    }

    for(int i=0;i<5;i++)
    {
       sum = sum+nums[i];
    }

    printf("Avg of numbers is: %d",sum/5);

    return 0;
}
