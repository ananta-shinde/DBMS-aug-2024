#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = { 20,1045,222,56,23};
    int largest = numbers[0];
    for(int i=0;i<5;i++)
    {
        if(numbers[i] >= largest)
        {
            largest = numbers[i];
        }
    }
    printf("%d",largest);
    return 0;
}
