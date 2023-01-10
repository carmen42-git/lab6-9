#include <iostream>

using namespace std;

class Driver{
 public:
     string nume;
     Driver (string nume){
        this->nume=nume;
     }
     string getNume(){
        return this->nume;
     }
     void setNume (string nume){
        this->nume=nume;
     }
};
class Car {
public:
    int age;
    Driver *driver;
    Car(int age, string driverNume)
    {
        this->age=age;
        this->driver=new Driver(driverNume);
    }
    int getAge(){
        return this->age;
    }
    Driver *getDriver(){
        return this->driver;
    }

};
int main()
{  Car m1 (12,"Georgescu Matei");
    cout<<"numele soferului: "<<m1.getDriver()->getNume()<<endl;
    cout<<"vechimea masinii: "<<m1.getAge()<<" ani"<<endl;

}
