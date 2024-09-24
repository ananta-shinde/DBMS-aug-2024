#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int start,end;
    cout << "Enter starting number : ";
    cin >> start;
    cout << "Enter ending number : ";
    cin >> end;

    while(start <= end){
        cout << start << "\t";
        start++;
    }
    
    return 0;
}

