#include <iostream>
#include <string>
using namespace std;


// compile time polymorphism
class Student {
public:
    string name;

    Student (){
        cout <<"Non-parameterized \n";
    };

    Student (string name){
        this->name = name;
        cout<<"Parameterized \n";
    };
};

class Print {
public:
   
    void show(int x){
        cout<<"x = "<< x << endl; 
    }

    void show(char ch){
        cout<<"char = " << ch << endl;
    }
};

//Run Time 
class Parent {
public:
//functin overriding 
    void show (){
        cout<<"Parent class\n";
    }; 
//virtual overriding 
    virtual void hello (){
        cout<<"Hello from parent\n";
    }; 
};

class Child : public Parent{
public:

//function overriding
    void show (){
        cout <<"Child class \n";
    };
//virtual overriding 
    void hello (){
        cout<<"Hello from child\n";
    }; 
};


int main(){

    //Student s1("Gaurav Kumar");

    // Print p1;
    // p1.show(10);
    // p1.show('&');

        Child c1;
        c1.show();
        c1.hello();

        Parent p1;
        p1.show(); 
        p1.hello();

    return 0;
};