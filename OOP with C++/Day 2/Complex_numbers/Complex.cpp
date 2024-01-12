#include <iostream>

using namespace std;

class Complex
{
    int real;
    int img;

public :
    Complex()
    {
        real=0;
        img=0;
    }

    Complex (int _real , int _img)
    {
        real=_real;
        img=_img;
    }

    Complex (int both)
    {
        real=both;
        img=both;
    }
    void setReal(int _real)
    {
        real=_real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg ()
    {
        return img;
    }
    void print()
    {
        if (img>0)
            cout <<endl<<real<<"+"<<img<<"j"<<endl;
        else if (img<0)
            cout <<endl<<real<<img<<"j"<<endl;
        else
            cout<<endl<<real<<endl;

    }
    Complex Add(Complex c)
    {
        Complex res;
        res.real=real + c.real;
        res.img=img + c.img;
        return res;
    }
};

Complex Add(Complex C1, Complex C2);

int main()
{

    Complex num1,num2(4,8),num3(7,-14);
    num1.print();
    num2.print();
    num3.print();

    Complex res;
    res = num1.Add(num2);
    res.print();

    cout << "***********************\n";

    res = Add(num2,num3);
    res.print();



    return 0;
}


Complex Add(Complex C1, Complex C2)
{
    Complex res;
    res.setReal(C1.getReal()+C2.getReal());
    res.setImg(C1.getImg()+C2.getImg());
    return res;
}
