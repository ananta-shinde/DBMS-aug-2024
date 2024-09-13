#include<iostream>

class Math{
    public:
     int addition()
     {
        
        printf("addition done by Math\n");
     }
};

class Math2{
    public:
     int addition()
     {
        printf("addition done by Math2\n");
     }
};
int main(int argc, char const *argv[])
{
    Math2 m1,m2;
    m1.addition();
    m2.addition();
    
    return 0;
}

