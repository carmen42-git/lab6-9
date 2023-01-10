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
class Triangle : public Shape
{
public:
void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
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
Drawing* d = new Drawing(new Triangle());
d->drawShape();
Drawing e(new Circle());
e.drawShape();
Triangle t1;
Circle c1;
Drawing f1(&t1);
f1.drawShape();
Drawing f2(&c1);
f2.drawShape();

}
