#include <iostream>
using namespace std;

class Shape {
protected:
    int Dim1;
    int Dim2;

public:
    Shape(){}
    Shape(int _Dim1 , int _Dim2 )  {Dim1=_Dim1;Dim2=_Dim2;}
    Shape(int _Dim)  {Dim1=_Dim;Dim2=_Dim;}

    int getDim1() { return Dim1; }
    int getDim2() { return Dim2; }

    void setDim1(int _Dim1) {
        Dim1 = _Dim1;
    }

    void setDim2(int _Dim2) {
        Dim2 = _Dim2;
    }


    void printShape()
    {
        cout<< "("<<Dim1<<","<<Dim2<<")"<<endl;
    }
    double calcArea() {  };



};

class RectangleClass : public Shape {
public:
    RectangleClass(){}
    RectangleClass(int _dim1  , int _dim2 ):Shape(_dim1,_dim2){}
    double calcArea() {
        return Dim1 * Dim2;
    }
};

class TriangleClass : public Shape {
public:
    TriangleClass () {}
    TriangleClass (int _Dim1,int _Dim2) : Shape(_Dim1,_Dim2){}
    TriangleClass (int _Dim) : Shape(_Dim){}

    double calcArea() {
        return 0.5 * Dim1 * Dim2;
    }
};


class SquareClass : public Shape
{

public:
    SquareClass(){}
    SquareClass(int _Dim):Shape(_Dim){}


    void setDim1(int _Dim) {
        Dim1 =Dim2= _Dim;
    }

    void setDim2(int _Dim) {
        Dim2 =Dim1 = _Dim;
    }
    double calcArea()
    {
        return (Dim1 * Dim2);
    }
};

class CircleClass : public Shape{

public:

    CircleClass (){}
    CircleClass (int Dim):Shape(Dim){}

    void setDim1(int _Dim) {
        Dim1 =Dim2= _Dim;
    }

    void setDim2(int _Dim) {
        Dim2 =Dim1 = _Dim;
    }


    double calcArea()
    {
        return 3.14 * Dim1 *Dim1;

    }



};

void PrintShapeArea ( Shape& S)   //Generalization
{
    cout<<"Area : "<<S.getDim1()<<":"<<S.getDim2()<<S.calcArea()<<endl;
}


void PrintAll(Shape Any)
{
    Any.printShape();
}

int main() {

    Shape S1(3,4);
    //PrintShapeArea(S1);

    SquareClass Sq(5);
    cout<<"\n";
    Sq.printShape();


    return 0;
}
