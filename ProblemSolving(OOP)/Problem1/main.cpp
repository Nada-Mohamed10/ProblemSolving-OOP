#include <iostream>
#include <math.h>

using namespace std;
class Circle
{
    private:
    double radius;
    public:
        void setRadius(double r)
        {
            radius=r;
        }
        double getRadius()
        {
            return radius;
        }
        Circle()
        {
            radius=0;
        }
         Circle(int r)
        {
            radius=r;
        }

    double  circleArea()
    {
          return  M_PI*radius*radius;
    }
    double circumference()
    {
        return 2*M_PI*radius;
    }
};


int main()
{
    Circle c(5);
    double area=c.circleArea();
    double circumference=c.circumference();
   cout<<"The area of Circle:"<<area<<endl;
   cout<<"the circumference of Circle:"<<circumference<<endl;
    return 0;
}



/*circle's area 3.14*r*r*/
/* circumfeence c=2*3.14*r;*/
/* Write a C++ program to implement a class called Circle that has private member variables for radius.
 Include member functions to calculate the circle's area and circumference*/
