//  Program to convert Polar Coordinate to Cartesian

#include<iostream>
#include<math.h>
using namespace std;

class cartesian{
    float x,y;
    public:
    cartesian(float x = 0,float y = 0)
    {
        this ->x =x;
        this ->y = y;
    }
    void showCartesianCoordinates()
    {
        cout<<"Cartesian coordinate is : ("<<x<<","<<y<<")"<<endl;
    }
       
};
class polar{
    float r,ang;
    public:
      polar(float r = 0,float ang = 0){
        this -> r = r;
        this ->ang = ang;
      };
      void getPolarCoordinates()
      {
        cout<<"Enter radial distance : ";
        cin>>r;
        cout<<"Enter the angle: ";
        cin>>ang;
      }

      operator cartesian()
      {
        cartesian c(r * cos(ang), r * sin(ang));
        return c;
      }
};


int main()
{
    polar p;
    p.getPolarCoordinates();
    cartesian c = p;
    c.showCartesianCoordinates();
    return 0;
}