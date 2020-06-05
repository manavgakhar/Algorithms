#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    int speed;
    int price;
    string name;

    void ignition(){
        cout<< "Vroom at "<<speed<<endl;
    }

    Car(int speed,int price, string name){
        this->name=name;
        this->price=price;
        this->speed=speed;
    }
    void printAll(){
        cout<<name<<endl;
        cout<<speed<<endl;
        cout<<price<<endl;
    }

};

int main(){

    Car c(150,2000000,"Merc");

    c.printAll();
   
    return 0;


}
