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
    friend ComplexNumber operator^(ComplexNumber z, int e);

    friend ComplexNumber operator+(ComplexNumber z1, ComplexNumber z2);
  };
   ComplexNumber operator+(ComplexNumber z1, ComplexNumber z2)
    {   ComplexNumber z3;
        z3.real=z1.real+z2.real;
        z3.imaginary=z1.imaginary+z2.imaginary;
        return z3;
    }
     ComplexNumber operator^(ComplexNumber z, int e)
    { ComplexNumber z1;
        z1.real=z.real*z.real-z.imaginary*z.imaginary;
        z1.imaginary=2*z.real*z.imaginary;
        return z1;
    }
  int main()
  {
      ComplexNumber z1(3,2), z2, z3;
      z2.read();
      z1.write();
      z2.write();
      cout<<~z1<<endl;
      cout<<~z2<<endl;
      z3=z1^2;
      z3.write();
      z3=z1+z2;
      z3.write();
  }
