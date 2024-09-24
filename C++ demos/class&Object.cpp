#include<iostream>
using namespace std;

class Circle{
    int r;
    const float pi = 3.14;
    float area;
    
    public:

    // member functions

    void read(){
        // accept input from user
        cout << "enter radius in meters";
        cin >> r;
    }
    
     void compute(){
        // calculate area
       area = pi*r*r;

     }

     void display(){
        // print area
        cout << "area of square is :" <<area;

     }

    


};

// global function
 void printMessage(){
        cout << "This is my sample string";
    }

int main()
{
   
   // memory-allocation
   Circle c1,c2;
//    c1.r = 20;
   c1.read();
   c1.compute();
   c1.display();
   c2.display();
    return 0;
}
