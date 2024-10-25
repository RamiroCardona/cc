#include <iostream>
using namespace std;

// Abstract base class
class Polygon {
  protected:
    int width, height;
  public:
  Polygon(int a, int b): width(a), height(b) {}
  virtual int area() = 0;  // pure virtual function
  void printArea()
  {cout << this->area() << endl;}
};

class Rectangle: public Polygon {
  public:
  Rectangle(int a, int b): Polygon(a,b) {}
  int area()
  {return width*height;}
};

class Triangle: public Polygon {
public:
  Triangle(int a, int b): Polygon(a,b) {}
  int area()
  {return width*height/2;}
};

int main() {
  Polygon * ppoly1 = new Rectangle(4,5);
  Polygon * ppoly2 = new Triangle(4,5);
  ppoly1->printArea();
  ppoly2->printArea();
  delete ppoly1;
  delete ppoly2;
  return 0;
}
