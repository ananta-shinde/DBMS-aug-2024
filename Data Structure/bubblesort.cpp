#include<stdio.h>
int main()
{
    int a;
    int numbers[5] = {20,23,55,42,13}; 
    int n = 5;
     // for no of passes
      for(int j=0;j<n-1;j++){

         // logic for compare and exchange
         for(int i=0;i<n;i++){
            int p = n-i;
            if( numbers[p-1] > numbers[p] ){
            int temp = numbers[p];
            numbers[p] = numbers[p-1];
            numbers[p-1] = temp;
        }

      }
       
    }

    // print an array
    for(int i=0;i<n;i++){
        printf("%d\t",numbers[i]);
    }
 
    return 0;
}
