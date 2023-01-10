#include <iostream>

using namespace std;

template <class T>
class Media
{
    T a, b;
  public:
      Media(T first, T second)
      {
          a=first; b=second;
      }
    float getMedia()
    {
        return (a.getage()+b.getage())/2;

    }

};

class Person
{
    string name;
    float age;
  public:
      Person()
      {

      }
      Person (string name, float age)
      {
          this -> name=name;
          this -> age=age;
      }
      float getage()
      {
          return this->age;
      }
};
 class Car
 {
     string IDnumber;
     float age;
   public:
     Car()
     {

     }
     Car (string IDnumber, float age)
     {
         this-> IDnumber=IDnumber;
         this-> age=age;
     }
     float getage()
     {
         return this-> age;
     }
 };

 int main()
 {
     Person p1("Andrei", 20), p2("Alex", 35);
     Car c1("DJ15ABC", 10), c2("DJ45DEF", 7);
     Media<Person> m1(p1,p2);
     cout<<"Media varstei pentru persoane este: "<<m1.getMedia()<<endl;
     Media<Car> m2(c1,c2);
     cout<<"Media varstei pentru masini este: "<<m2.getMedia()<<endl;

 }
