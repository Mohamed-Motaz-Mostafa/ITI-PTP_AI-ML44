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

    Complex operator + (Complex c1)
    {
        return this->Add(c1);
    }

    Complex operator + (int x)
    {
        return Complex(real+x,img);
    }

    int operator == (Complex C)
    {
        return (this->real==C.real && this->img==C.img);
    }



    int operator != (Complex C)
    {
        return !(this->real==C.real && this->img==C.img);
    }

//    operator ++

Complex operator += (Complex& C2)
    {
        Complex res;
        res.setReal(this->real+C2.getReal());
        res.setImg(this->real+C2.getImg());
        *this=res;
        return res ;
    }


    Complex operator ++ (int)       //postfix
    {
        Complex res;
        res = *this;
        real=real+1;
        return res;
    }

    Complex operator ++()
    {
        real=real+1;
        return *this;
    }


    explicit operator int()
    {
        return real;
    }
};




    Complex operator + (int x ,Complex c )
    {
        Complex res;
        //((c.getReal()+x),c.getImg)
        res.setReal((c.getReal()+x));
        res.setImg(c.getImg());

        return res;

    }
Complex Add(Complex C1, Complex C2);

int main()
{

    Complex num1(4,5),num2(7,14),num3(7,-14),num0(0,0);
    num1.print();
    num2.print();
    //num3.print();
    num0.print();
    num0=num1++;
    num0.print();


    cout<< "casting : "<<int(num1)<<endl;

    cout << "\n**Test**" ;
    //cout <<num1==num2 << endl;
    //num1 += num2;
    num1++;
    cout << "\n**Test2**\n" ;

    num1.print();
    num2.print();
    Complex res;
    //res = num1.Add(num2);
    res = num2+num3;
    //res.print();
    res =115+res;
    res.print();
    cout << "***********************\n";

    //res = Add(num2,num3);
    //res.print();



    return 0;
}


Complex Add(Complex C1, Complex C2)
{
    Complex res;
    res.setReal(C1.getReal()+C2.getReal());
    res.setImg(C1.getImg()+C2.getImg());
    return res;
}
