#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[] = {5,1,9,6,4,2,7};
    // int marks[10];
    for(int i=0;i<6;i++){
        for(int j=i+1;j>0;j--){
            if(numbers[j]<numbers[j-1]){
                int temp = numbers[j-1];
                numbers[j-1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // print array
    for(int i=0;i<7;i++)
    {
        printf("%d\t",numbers[i]);
    }
    return 0;
}

