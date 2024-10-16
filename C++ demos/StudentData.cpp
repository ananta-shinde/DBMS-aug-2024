#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string prn ;
    string collegeName;

   Student(){
      cout << "Enter name of student";
      cin >> name;
      cout << "Enter name of college name";
      cin >> collegeName;
   }

    Student(string n,string collge){
        name = n;
        collegeName = collge;
    }

    ~Student(){
        cout << "destuctor was called" << endl;
    }

};
int main(int argc, char const *argv[])
{

    Student s1("Ananta","MIT"),s2("Ram","SBNM");
    Student s3;
    cout << s1.name << endl;
    cout << s1.collegeName << endl;
    cout << s2.name << endl;
    cout << s2.collegeName << endl;
    cout << s3.name << endl;
    cout << s3.collegeName << endl;

    return 0;
}
