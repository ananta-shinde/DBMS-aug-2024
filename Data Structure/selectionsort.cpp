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
int main(int argc, char const *argv[])
{
    int numbers[5]={44,15,23,20,28};
     
      // print array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }

    printf("\nafter sorting\n");
    
    for(int i=0;i<5;i++){
         int smallest = numbers[i];
         int smallestIndex;
        for(int j=i;j<5;j++)
        { 
            if(numbers[j]<= smallest){
                 smallest = numbers[j];
                 smallestIndex = j;
            }    
        }

        //  printf("value:%d,index:%d\n",smallest,smallestIndex);
         int temp = numbers[i];
         numbers[i] =  numbers[smallestIndex];
         numbers[smallestIndex] = temp;
        
    }

    // print array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",numbers[i]);
    }
    return 0;
}
