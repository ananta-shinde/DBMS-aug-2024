#include<iostream>
using namespace std;

class Vehicle{
    int model_Number;
    public:
    void start(){}
    void stop(){}    
};

class ElectricVehicle{

};

class TwoWheeler:public Vehicle{

};

class ElectricSportBike:public TwoWheeler,public ElectricVehicle{

};

int main(int argc, char const *argv[])
{
    ElectricSportBike s;
    s.start();
    s.stop();
    return 0;
}
