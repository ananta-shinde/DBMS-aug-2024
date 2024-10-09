#include<iostream>
using namespace std;

class Student{
     int rollNo;
     string name;

     public:
     void getData(){
        cout << "enter your name";
        cin >> name;
        cout << "Enter roll No :";
        cin >> rollNo;
     }

     void display(){
        cout << "Name: "<< name;
        cout << "Roll no :" << rollNo;
     }

};

class Teacher{ 
     int salary;
     string name;
};



int main()
{
    Student s1;
    Teacher t1;
    
    s1.getData();
    s1.display();
  
    return 0;
}

