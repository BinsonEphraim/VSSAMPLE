#include<iostream>
using namespace std;
class Person{
    public:
    string firstName;
    string LastName;
    int age; 

     void fullname(string firstName,string LastName,int age){
        cout << " The name and age of this person is : " << " First name is  "<< firstName <<" The lastName is "<< LastName <<" " << age;
        }

    };
    int main(){
        Person p;
       // p.firstName = " lonjezo";
       // p.LastName = " Ephraim";
       // p.age = 25;
        p.fullname("lonjezo","Ephraim", 25);
        return 0;
    }
