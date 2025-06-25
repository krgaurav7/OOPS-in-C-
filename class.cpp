#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;
// properties  or attributes
public:
    string name;
    string department;
    string subject;

    // Teacher(){ // constructor { non-parameterised}
    //     department = "CSE";
    // }

    // Teacher( string n, string d, string s, double sal){ // parameterised constructor
    //     name = n;
    //     department =d;
    //     salary = sal;
    //     subject = s;
    // }

    Teacher( string name, string department, string subject, double salary){ // use of this parameter
        this->name = name;
        this->department =department;
        this->salary = salary;
        this->subject = subject;
    }

    Teacher( Teacher &orgobj){ // copy constructor
        this->name = orgobj.name;
        this->department =orgobj.department;
        this->salary = orgobj.salary;
        this->subject = orgobj.subject;
    }


  // mathods or member functions
    void changeDeprtment( string newDep){
        department = newDep;
    };

    void setSalary(double s){ // setter
        salary = s ;
    }

    double getSalary(){//getter
        return salary;
    }

    void getInfo(){
        cout<< "name :" <<name << endl;
        cout<< "dept :" <<department << endl;
        cout<< "Subject :" <<subject << endl;
        cout<< "Salary :" <<salary << endl;
    }
};

class Account {

private:
    double balance;
    string password; // hiding {encapsulation}
public:
    string username;
    double accountID;
};

class Student {
public:
    string name;
    double* cgpaptr;


    Student (string name, double cgpa){
        this->name = name;
        //this->cgpa = cgpa;
        cgpaptr = new double; // to allocate new memory (heap memory // float memory (dynamic type memory))
        *cgpaptr = cgpa; // dereferance
    };

    Student (Student &obj){ // copy constructor
        this->name = obj.name;
        // for deep copy 
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
        //this->cgpaptr = obj.cgpaptr; // for shallow copy 
    };

    void getInfost(){
        cout << "Name = "<< name << endl;
        cout << "cgpa = "<< *cgpaptr <<endl;
    };
};

int main (){
    // Teacher t1; // constructor
    // t1.name = "Gaurav";
    // t1.subject = "C++";
    // // t1.department = "ECE";
    // t1.setSalary(500000);
    // t1.getSalary();

    //parameterised 
    Teacher t1("Gaurav", "ECE", "Cricket", 703342);

    // cout << t1.department << endl;
    // cout << t1.getSalary() << endl;

    //t1.getInfo();

    Teacher t2(t1);// custum copy constructor
    //t2.getInfo();

    Student s1("Gaurav Kymar" , 9.0);
    s1.getInfost();

    Student s2(s1);
    *(s2.cgpaptr) = 9.9;
    //*(s2.name) ="Anupurna Gupta";

    s2.getInfost();

    s1.getInfost();
    return 0;
}