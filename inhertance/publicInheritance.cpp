#include<iostream>
using namespace std;
class MainClass{
    private:
    int class_Id;
    protected:
    int count;
    public:
    int data;
};

class ChildClass:private MainClass{
    
};
int main(int argc, char const *argv[])
{
    MainClass m;
    ChildClass child;
    
    
    return 0;
}
