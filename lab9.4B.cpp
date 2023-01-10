#include <iostream>
#include <string>
#include <cmath>
#include<vector>
using namespace std;
class Shape
{
public:
virtual void draw() = 0; // we define the general behavior
virtual float getaria() = 0;
};
class Circle : public Shape
{
private:
     int x,y;
     float r;
public:
void draw() { cout << "circle\n"; }
Circle(int x, int y, float r)
{
    this-> x=x;
    this-> y=y;
    this-> r=r;
}
int getx()
{
    return this->x;
}
int gety()
{
    return this->y;
}
int getr()
{
    return this->r;
}
float getaria(){
    return 3.14*r*r;
}

};
class Triangle : public Shape
{ private:
    float a, b, c;
public:
void draw() { cout << "triangle\n"; }
Triangle (float a, float b, float c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
float geta()
{
    return this->a;
}
float getb()
{
    return this->b;
}float getc()
{
    return this->c;
}
float getaria()
{
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
};

class Square : public Shape
{
private:
    float l;
public :
    void draw() { cout << "square\n"; }
 Square( float l)
 {
 this->l=l;
 }
 float getl()
 {
     return this->l;
 }
 float getaria(){
    return l*l;
 }
};


class Drawing
{
    public:
 Drawing (Shape* shape)
 {
    shape->draw();
 }
 void drawShape()
{

}
};
int main()
{
Drawing* d = new Drawing(new Triangle(3,2,4));
d->drawShape();
Drawing e(new Circle(2,3,7));
e.drawShape();
Triangle t1(2,4,5);
Triangle t2(6,4,2);
Triangle t3(5,2,4);
Circle c1(4,2,8);
Circle c2(5,7,6);
Circle c3(4,5,1);
Square s1(5);
Square s2(4);
Square s3(6);
Drawing f1(&t1);
f1.drawShape();
Drawing f2(&c1);
f2.drawShape();
Triangle vt[3]={t1,t2,t3};
float ariat=0;
for (int i=0; i<3; i++)
    ariat=ariat+vt[i].getaria();
  cout<<"Aria triunghiurilor: "<<ariat<<endl;
 Circle vc[3]={c1,c2,c3};
float ariac=0;
for (int i=0; i<3; i++)
    ariac=ariac+vc[i].getaria();
  cout<<"Aria cercurilor: "<<ariac<<endl;
 Square vs[3]={s1,s2,s3};
float arias=0;
for (int i=0; i<3; i++)
    arias=arias+vs[i].getaria();
  cout<<"Aria patratelor: "<<arias<<endl;

  cout<<"Suma ariilor este: "<<ariat+arias+ariac<<endl;
   vector<Shape*> figureList;
   figureList.push_back(new Triangle(2,4,5));
   figureList.push_back(new Circle(4,2,8));
   figureList.push_back(new Square(5));
   figureList.push_back(new Circle(4,5,1));
   float aria=0;
 for( int i=0; i<figureList.size();i++)
    aria=aria+figureList.at(i)->getaria();
   cout<<"Suma ariilor din lista este: "<<aria<<endl;




}
