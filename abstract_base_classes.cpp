#include <iostream>
using namespace std;

// Abstract base class
class Polygon {
  protected:
    int width, height;
  public:
  void set_values(int a, int b)
  {width=a; height=b;}
  virtual int area() = 0;  // pure virtual function

};

class Rectangle: public Polygon {
  public:
  int area()
  {return width*height;}
};

class Triangle: public Polygon {
public:
  int area()
  {return width*height/2;}
};

int main() {
  Rectangle rectangulo;
  Triangle triangulo;
  Polygon * ppoly1 = &rectangulo;
  Polygon * ppoly2 = &triangulo;
  ppoly1->set_values(8,6);
  ppoly2->set_values(8,6);
  cout << ppoly1->area() << endl;
  cout << ppoly2->area() << endl;
  return 0;
}
