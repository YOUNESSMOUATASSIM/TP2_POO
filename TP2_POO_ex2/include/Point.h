#ifndef POINT_H
#define POINT_H


class Point
{   private:
        float x;
        float y;

    public:
        Point(float x=0,float y=0);
      //  ~Point();
     void afficherPoint();
     void afficherPoint(Point);
     Point translatePoint(float t=0);
     Point positionnerPoint(float x=0,float y=0);
     void comparerPoint(Point);
     Point symetriquePoint();
     Point rotatePoint(float ang=0);





};

#endif // POINT_H
