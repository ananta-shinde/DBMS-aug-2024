#include<iostream>
using namespace std;
class Car{
    
    public:
    string modelName;
    // default constructor
    Car(){
       modelName = "No Model number";
    }
    // parameterized constructor
    Car(string n){
       modelName = n;
    }
   
    void start(){
        cout << "Car has started";
    }

};
int main(int argc, char const *argv[])
{
    Car c1("BMW"),c2("AUDI"),c3;
    cout << c1.modelName<<endl;
    cout<<c2.modelName << endl;
    cout<<c3.modelName << endl;
    return 0;
}
