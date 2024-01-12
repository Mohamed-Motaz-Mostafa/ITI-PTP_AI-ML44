#include <iostream>
#include <graphics.h>
using namespace std;


class Point {
    int X;
    int Y;

public:
    Point(){X=0;Y=0;} // Default Constrictor.
    Point(int both){X=both ; Y=both;}
    Point(int _X,int _Y){X=_X;Y=_Y;}

    void setX(int _X)
    {
        X=_X;
    }

    void setY(int _Y)
    {
        Y=_Y;
    }

    void setPoint(int _X, int _Y)
    {
        X=_X;
        Y=_Y;
    }

    int getX()
    {
        return X;
    }

    int getY()
    {
        return Y;
    }

    void printPoint()
    {
        cout<<"("<<X<<","<<Y<<")";
    }

};

class RectangleClass{        //Rectangle Class.
    Point UL;
    Point LR;
public:
    RectangleClass ( int X1 , int Y1 , int X2 , int Y2 ):UL(X1,Y1),LR(X2,Y2){}
    RectangleClass (Point P1 , Point P2) {UL=P1;LR=P2;}


    void setUL(Point _UL)
    {
        UL=_UL;
    }

    void setUL(int X ,int Y)
    {
        UL.setPoint(X,Y);
    }

    void setLR(Point _LR)
    {
        LR=_LR;
    }

    void setLR(int X ,int Y)
    {
        LR.setX(X);
        LR.setY(Y);
    }

    void setRec (Point P1 , Point P2)
    {
        UL=P1;
        LR=P2;
    }

    void setRec( int X1 , int Y1 , int X2 , int Y2 )
    {
        UL.setPoint(X1,Y1);
        LR.setPoint(X2,Y2);
    }

    void printRrc()
    {
        cout<<"Rectangle UL :";
        UL.printPoint();
        cout<<"Rectangle LR :";
        LR.printPoint();
        cout<<endl;
    }

    void drow ()
    {
        rectangle(UL.getX(),UL.getY(),LR.getX(),LR.getY());

    }

    void drow (int ULX, int ULY , int LRX, int LRY)
    {
        rectangle(ULX,ULY,LRX,LRY);

    }

    void drow (Point ul ,Point lr)
    {
        rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());

    }

} ;

class CircleClass{
    Point center;
    int rad;
public:
    CircleClass(){rad=1;}
    CircleClass(int _X ,int _Y , int _rad ):center(_X,_Y){rad = _rad;}

    void setCenter (int X ,int Y)
    {
        center.setPoint(X,Y);
    }

    void setCenter(Point _center)
    {
        center = _center;
    }

    void setRad(int _rad)
    {
        rad= _rad;
    }

    Point getCenter()
    {
        return center;
    }

    int getRad()
    {
        return rad;
    }

    void print()
    {
    center.printPoint();
    cout<<" and rad = "<<rad;
    }

    void draw()
    {
        circle(center.getX(),center.getY(),rad);
    }

};

class Line {
    Point P1;
    Point P2;
public:
/*
    Line()
    {
        cout<< "Defolt ********"<<endl;
    }
*/

    Line (const Line& _line)
    {
        cout<< "copy constructor. "<<endl;
    }

    void setP1(Point _P1)
    {
        P1 = _P1;
    }

    void setP2(Point _P2)
    {
        P2 = _P2;
    }

    void drow()
    {
        line(P1.getX(),P1.getY(),P2.getX(),P2.getY());
    }

    void printLine()
    {
        P1.printPoint();
        cout<<endl;
        P2.printPoint();
    }
};

class Triangle{
    Point P1;
    Point P2;
    Point P3;
public:

    void setP1(Point _P1)
    {
        P1 = _P1;
    }

    void setP2(Point _P2)
    {
        P2 = _P2;
    }

    void setP3(Point _P3)
    {
        P3 = _P3;
    }

    Point getP1()
    {
        return P1;
    }

     Point getP2()
    {
        return P2;
    }

     Point getP3()
    {
        return P3;
    }

    void printTriangle()
    {
        cout << " first point : ";
        P1.printPoint();
        cout << " second point : ";
        P2.printPoint();
        cout << " third point : ";
        P3.printPoint();
    }

    void drow()
    {
        line( P1.getX(), P1.getY(), P2.getX(), P2.getY() );
        line( P2.getX(), P2.getY(), P3.getX(), P3.getY() );
        line( P3.getX(), P3.getY(), P1.getX(), P1.getY() );
    }
} ;

int main()
{
    Point P1(6,8);
    Point P2(6,150);
    Point P3(82,150);
    Triangle T;
    T.setP1(P1);
    T.setP2(P2);
    T.setP3(P3);


    Point P1T2(50,200);
    Point P2T2(50,350);
    Point P3T2(200,350);
    Triangle T2;
    T2.setP1(P1T2);
    T2.setP2(P2T2);
    T2.setP3(P3T2);

    //RectangleClass R(P1,P2);
    //R(P1,P2);
   // R1.printRrc();
   // P1.printPoint();
  cout<<endl;


    int gdriver=DETECT,gmode,errorcode;
    initgraph(&gdriver,&gmode,"");

   // Line LL;
    //LL.setP1(P1);
   // LL.setP2(P2);


   // Line LLL(LL);

    //L.setP1(P1);
   // LL.printLine();



    T.drow();
    T2.drow();
    //line(6,8,28,44);

/*
    circle (50,50,15);
    circle (120,50,15);
    rectangle(75,70,95,80);
    rectangle(50,100,120,130);
*/
    //circle (120,120,30);
    //circle (500,20,320);
    //rectangle(90,165,150,345);
    //rectangle(180,90,240,345);
    //rectangle(270,165,330,345);
    //rectangle(90,15,330,75);

   //cout << "Hecscsllo worldjjvsssd" << endl;


getch();
closegraph();
    return 0;
}
