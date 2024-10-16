#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m=4,n=4,i=0,j=0,k=0;
    int a[m] = {18,20,35,49};
    int b[n] = {11,23,56,68};
    int c[m+n];

    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }else{
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<m){
        c[k] = a[i];
        i++;
        k++;
    }

    while(j<n){
        c[k] = b[j];
        j++;
        k++;
    }


   // print sorted array

    for(int i=0;i<n+m;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}
