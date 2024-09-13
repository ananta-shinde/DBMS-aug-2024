#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    // int numbers[5] = {20,15,13,45,55}; // initialization
    int numbers[5];
     
    //bulk updatig array
    for(int i=0;i<5;i++)
    {
        printf("enter a number :");
        scanf("%d",&numbers[i]);
    }
   
    int num = 20;
    // single update
    numbers[4] = 60;
    printf("%d\n",num);


    // print or array traversal
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }
    
    
    return 0;
}
