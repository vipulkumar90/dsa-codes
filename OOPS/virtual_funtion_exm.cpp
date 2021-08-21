#include <iostream>
using namespace std;


class Animal{
    public:
    virtual void eat(){
        cout<<"I am eating generic food\n";
    }
};

class Cat : public Animal{
    public:
    void eat(){
        cout<<"I am eating cat foot\n";
    }
};

class Dog : public Animal{
    public:
    void eat(){
        cout<<"I am eating dog foot\n";
    }
};

void function(Animal *ptr){
    ptr->eat();
}

int main(){
    Animal *ptr;

    Cat c_obj;
    
    Dog d_obj;

    ptr = &c_obj;
    function(ptr);

    ptr = &d_obj;
    function(ptr);
}