#include<iostream>
using namespace std;

class Student{

    string name ;
    float marks ;

    public:
    void acceptData(){
        cout<<"enter your name:";
        cin >> name;
        cout << "enter your marks";
        cin >> marks;
    }

    void display(){
        cout << "Name:"<< name << "Marks :" << marks;
    }
};

int main()
{
    Student s1,s2;
    // s1.acceptData();
    s1.display();
    s2.acceptData();
    s2.display();
    return 0;
}
