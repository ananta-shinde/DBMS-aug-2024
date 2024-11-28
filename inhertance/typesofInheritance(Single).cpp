#include<iostream>
using namespace std;

class Vehicle{
    int model_Number;
    public:
    void start(){}
    void stop(){}    
};

class TwoWheeler:public Vehicle{

};

int main(int argc, char const *argv[])
{
    TwoWheeler t;
    t.start();
    t.stop();
    return 0;
}
