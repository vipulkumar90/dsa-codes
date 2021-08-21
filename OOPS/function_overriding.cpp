#include <iostream>
using namespace std;

class Animal{
    public:
    void makeSound(){
        cout<<"Animal sound\n\n";
    }
};

class Dog: public Animal{

    public:
    void makeSound(){
        cout<<"Dogs bark\n\n";
        Animal::makeSound();        // Calling base function
    }
};

class Cat : public Animal{
    public:
    void makeSound(){             // base function ignored
        cout<<"Cats meow\n\n"; 
    }
};

int main(){
    Animal a;
    cout<<"Animal Class\n";
    a.makeSound();

    Dog d;
    cout<<"Dog Class\n";
    d.makeSound();

    Cat c;
    cout<<"Cat Class\n";
    c.makeSound();
}