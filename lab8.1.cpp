#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber
{
private:
   float real, imaginary;
public:
    ComplexNumber (){

    }
    ComplexNumber(float real, float imaginary)
    {
      this->real=real;
      this->imaginary=imaginary;
    }
    void read(){
        cin>>real>>imaginary;
    }
    void write()
    {
         cout <<real<<"+"<<imaginary<<"i"<<endl;
    }
    float operator~()
    {
        return sqrt(real*real+imaginary*imaginary);
    }

    friend ComplexNumber operator<(ComplexNumber z1, ComplexNumber z2);
  };

    ComplexNumber operator<(ComplexNumber z1, ComplexNumber z2)
    {
     if (~z1 < ~z2)
        return z1;
     else
        return z2;

    }
  int main()
  {
      ComplexNumber z1(3,2), z2, z3;
      z2.read();
      z1.write();
      z2.write();
      cout<<~z1<<endl;
      cout<<~z2<<endl;
      z3=z1<z2;
      cout<<"Cel mai mic numar complex este: "<<endl;
      z3.write();

  }

