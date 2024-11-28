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

class SportBike:public TwoWheeler{

};

int main(int argc, char const *argv[])
{
    SportBike s;
    s.start();
    s.stop();
    return 0;
}
