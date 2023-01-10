#include <iostream>
#include<vector>
using namespace std;
class Vehicle {
public:
virtual void start() = 0;
};
class Rocket : public Vehicle {
public:
void start()
{
cout << "start NASA rocket " << endl;
}
};
class Car : public Vehicle {
public:
void start()
{
cout << "start red car " << endl;
cout <<"start awesome car"<<endl;
}
};
int main() {
vector <Vehicle*>vehicule;
vehicule.push_back(new Car());
vehicule.push_back(new Rocket());
    for(auto element:vehicule)
    {
element->start();
}
}
