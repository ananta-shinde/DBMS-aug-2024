#include<iostream>
using namespace std;

class MyMath{
    public:
    int n1;
    int n2;

    void printAddition()
    {
        cout << "Addition is : " << n1+n2;
    }

};

int main()
{
    // create object of class
     MyMath m;
   
    // set values to object
    cout << "enter a number:";
    cin >> m.n1;
    cout << "enter a number:";
    cin >> m.n2;
   
   // call object method to print addition
    m.printAddition();
    return 0;
}
