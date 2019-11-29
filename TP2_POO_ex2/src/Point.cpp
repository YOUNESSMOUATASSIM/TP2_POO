#include "Point.h"
#include <iostream>
#include <math.h>
Point::Point(float x,float y)
{
this->x=x;
this->y=y;
}
/*void afficherPoint();
     void afficherPoint(Point);
     Point translatePoint(float t=0);
     Point positionnerPoint(float x=0,float y=0);
     void comparerPoint(Point);
     Point symetriquePoint();
     Point rotatePoint(float ang=0);*/
void Point::afficherPoint()
{

std::cout<<"\nP("<<this->x<<","<<this->y<<")\n";


}
void Point::afficherPoint(Point p)
{

   std::cout<<"\nP("<<p.x<<","<<p.y<<")\n";

}

Point Point::translatePoint(float t)
{
   this->x+=5;
   this->y+=5;

return *this;
}

Point Point::positionnerPoint(float x,float y)
{
    this->x=x;
    this->y=y;

    return *this;

}

void Point::comparerPoint(Point p)
{
    if(this->x==p.x && this->y==p.y)
    {
        std::cout<<" \n les deux  sont  identique !\n";
    }
    else
    {
        std::cout<<" \n les deux ne sont pas identique !\n";
    }


}
Point Point::symetriquePoint()
{

    if((this->x >0 && this->y >0)|| (this->x >0 && this->y <0))
    {
        this->x=-x;
    return *this;
    }
    if((this->x <0 && this->y <0) || (this->x <0 && this->y >0))
    {
        this->x=x;
    return *this;
    }

  if(this->x==0 && this->y==0)
    {
    return *this;
    }

}

Point Point::rotatePoint(float ang)
{
    this->x=(this->x)*cos(ang)- (this->y)*sin(ang);
    this->y=(this->x)*sin(ang)+ (this->y)*cos(ang);

    return *this;
}
