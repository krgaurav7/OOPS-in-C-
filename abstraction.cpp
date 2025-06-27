#include <iostream>
#include <string>
using namespace std;

class Shape { // abstract clss
    virtual void draw() = 0; // pure virtual function
};

class Circle {
public:
    void draw (){
        cout<< "Drawing a circle\n";
    }
};

// static keyword

void fun (){
    static int x = 0;
    cout << "x = " <<x << endl;
    x++;
}

class A {
public:
    int y;

    void incy(){
        y++;
    }
};

class ABC {
public:
    ABC(){
        cout<<"Constructor\n";
    }

    ~ABC(){
        cout<<"Destructor \n";
    }
};

int main (){
    //Shape s1;  // error - because it is abstract function

    // Circle c1;
    // c1.draw(); 

    for(int i =5; i>0; i--){
        //fun();
    };

    // A obj;
    // obj.y=0;
    // cout<< obj.y << endl;
    // obj.incy();
    // cout<< obj.y << endl;

    if(true){
       static ABC obj;
    }
    cout<<"End of main\n";

    return 0;
}