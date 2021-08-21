#include <iostream>
using namespace std;

class Base{
    private:
    int a;
    public:
    Base(){
        a = 10;
    }
    void out(){
        cout<<a;
    }
};

int main(){
    Base b;
    b.out();
    return 0;
}