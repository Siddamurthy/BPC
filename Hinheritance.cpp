#include <iostream>
using namespace std;
//hierarchical inheritance example
class Shape                   // shape class -> base class
{
public:
int x,y;
  
void get_data(int n,int m) {
      x= n;
      y = m;
   }
};
class Rectangle : public Shape // inherit Shape class
{
public: 
int area_rect() {
int area = x*y;
return area;
   }
};
class Triangle : public Shape // inherit Shape class
{
public:
int triangle_area() {
float area = 0.5*x*y;
return area;
   }
};
class Square : public Shape // inherit Shape class
{
public:
int square_area() {
float area = 4*x;
return area;
   }
};
int main()
{ Rectangle r;
   Triangle t;
   Square s;
   int length,breadth,base,height,side;
   //area of a Rectangle
   std::cout << "Enter the length and breadth of a rectangle: "; cin>>length>>breadth;
   r.get_data(length,breadth);
   int rect_area = r.area_rect();
   std::cout << "Area of the rectangle = " <<rect_area<< std::endl;
   //area of a triangle
   std::cout << "Enter the base and height of the triangle: "; cin>>base>>height;
   t.get_data(base,height);
   float tri_area = t.triangle_area();
   std::cout <<"Area of the triangle = " << tri_area<<std::endl;
   //area of a Square
   std::cout << "Enter the length of one side of the square: "; cin>>side;
   s.get_data(side,side);
   int sq_area = s.square_area();
   std::cout <<"Area of the square = " << sq_area<<std::endl;
   return 0;
}
