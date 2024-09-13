#include<stdio.h>
int main()
{
    int a;
    int numbers[5] = {20,23,55,42,13}; 
     // for no of passes
      for(int j=0;j<5;j++){

         // logic for compare and exchange
         for(int i=0;i<5;i++){
            if( numbers[5-i-1] > numbers[5-i] ){
            int temp = numbers[5-i];
            numbers[5-i] = numbers[5-i-1];
            numbers[5-i-1] = temp;
        }

      }
       
    }

    // print an array
    for(int i=0;i<5;i++){
        printf("%d\t",numbers[i]);
    }
 
    return 0;
}
