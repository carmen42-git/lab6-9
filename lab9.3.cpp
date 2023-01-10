#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
virtual void draw() = 0; // we define the general behavior
};
class Circle : public Shape
{
public:
void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Rectangle : public Shape
{
public:
void draw() { cout << "rectangle\n"; } // we specify the behavior for this shape
};
class Square : public Shape
{
public:
    void draw() { cout <<"square\n";}

};
/*class Drawing
{
    public:
 void drawShape(Shape* pShape)
{
pShape->draw();
}*/
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
Drawing* d = new Drawing(new Rectangle());
d->drawShape();
Drawing e(new Circle());
e.drawShape();
Drawing g(new Square());
g.drawShape();
Rectangle r1;
Circle c1;
Square s1;
Drawing f1(&r1);
f1.drawShape();
Drawing f2(&c1);
f2.drawShape();
Drawing f3(&s1);
f3.drawShape();

}
