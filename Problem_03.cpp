// Program to convert Cartesian coordinate to Polar.

#include<iostream>
#include<math.h>
// #include<cmath>
#define SQUARE(x) (x * x)
using namespace std;

class cartesian{
    float x,y;
    public:
    cartesian(float x = 0,float y = 0)
    {
        this ->x =x;
        this ->y = y;
    }
    void getCartesianCoordinate()
      {
        cout<<"Enter x coordinate : ";
        cin>>x;
        cout<<"Enter y coordinate: ";
        cin>>y;
      }
      int getx(){return x;}
      int gety(){return y;}
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
      
      polar(cartesian t)
      {
        r = sqrt(SQUARE(t.getx()) + SQUARE(t.gety()));
        ang = atan2(t.gety(), t.getx());
      }

      
    void showPolarCoordinates()
    {
        cout<<"Polar coordinate is : ("<<r<<","<<ang<<")"<<endl;
    }
};


int main()
{
    cartesian c;
    c.getCartesianCoordinate();
    polar p = c;
    p.showPolarCoordinates();
    return 0;
}