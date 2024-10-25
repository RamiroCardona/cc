#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
  void set_values(int a, int b)
  {width=a; height=b;}
  virtual int area()
  {return 450;}
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
  Polygon poly;
  Polygon * ppoly1 = &rectangulo;
  Polygon * ppoly2 = &triangulo;
  Polygon * ppoly3 = &poly;
  ppoly1->set_values(8,6);
  ppoly2->set_values(8,6);
  ppoly3->set_values(8,6);
  cout << ppoly1->area() << endl;
  cout << ppoly2->area() << endl;
  cout << ppoly3->area() << endl;
  return 0;
}
