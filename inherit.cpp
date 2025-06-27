#include<iostream>
#include <string>
using namespace std;

// In constructor - 1st Parent constructor call then Child constructor
// In destructor - 1st child onstructor call then parent constructor

class person {
public: 
    string name;
    int age;
        
        person(string name, int age){
        this->name = name;
        this->age = age;
    };

    // constructor
    // person(){
    //     cout<<"Parent - Your Baap \n" ;
    // }

    ~person(){
        cout <<"Hii I deleted everything of Baap" << endl;
    };
};

//inheritance
class Student :public person {
public:
    int rollno;

    //constrctor
    // Student(){
    //     cout<<"Beta constructor \n";
    // }

    Student(string name,  int age, int rollno) : person ( name, age){
        cout<<"Beta constructor \n";
        this->rollno = rollno;
    };

        // destructor
    ~Student(){
        cout <<"Hii I deleted everything of Beta" << endl;
    };

    void getInfo(){
        cout<< "name = "<< name <<endl;
        cout<< "age = "<< age <<endl;
        cout<< "roll no = "<< rollno <<endl;
    };
};

int main(){
    // Student s1;
    // s1.name = "Annu Gupta";
    // s1.age = 20;
    // s1.rollno = 13;

    Student s1("Gaurav Kumar", 22, 57);

    s1.getInfo();
    return 0;
};