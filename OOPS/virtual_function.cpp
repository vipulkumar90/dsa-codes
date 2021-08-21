#include<iostream>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"Base class show function called\n";
    }
    virtual void print(){
        cout<<"Base class print function called\n";
    }
};

class Derived : public Base{
        public:
    void show(){
        cout<<"Derived class show function called\n";
    }
    // Automatically virtual
    void print(){
        cout<<"Derived class print function called\n";
    }
};

int main(){
    Base *base_ptr;
    Derived derived_obj;

    base_ptr = &derived_obj; // because of this

    // runtime polymorphism
    base_ptr->print(); // derived class print fn called
    base_ptr->show();  // base class print fn called
}