#include<stdio.h>

int smallestOfArray(int arr[]){
     int smallest = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i] <= smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int marks[5] = {40,35,120,16,20};
    int numbers[5] = {40,40,55,1,20};
   
    printf("Smallest no is :%d",smallestOfArray(marks));
    return 0;
}
