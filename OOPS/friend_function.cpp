#include<iostream>
using namespace std;

class Distance{
    private:
    int m;
    public:
    Distance(){
        m = 0;
    }

    void displayData(){
        cout<<"Meters value: "<<m<<endl;
    }

    friend void addValue(Distance &d);
};

void addValue(Distance &d){
    d.m += 5;
}

void displayData(){

}
int main(){
    Distance d1;
    d1.displayData();

    addValue(d1);

    d1.displayData();

    return 0;
}