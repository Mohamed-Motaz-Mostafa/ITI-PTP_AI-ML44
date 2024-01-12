#include <iostream>
using namespace std;

class Stack
{
    int size = 5;
    //int arr[5];
    int tos;
    int * arr;

public:
    Stack()
    {
        tos = 0;
        arr =new int[size];
    }
    Stack( Stack  const & c )
    {
        tos = c.tos;
        size = c.size;
        arr = new int[size];
        for (int i = 0; i<tos ; i++)
        {
            arr[i]=c.arr[i];
        }
    }
    Stack(int _size)
    {
        size = _size;
        arr =new int[size];

        tos=0;
    }

    int isEmpty()
    {
        if (tos == 0)
        {
            //cout << "Stack is Empty.\n";
            return 1;
        }
        else
        {
            //cout << "Stack is not Empty.\n";
            return 0;
        }
    }

    int isFull()
    {
        if (tos == size)
        {
            cout << "Stack is Full.\n";
            return 1;
        }
        else
        {
            //cout << "Stack is not Full.\n";
            return 0;
        }
    }

    void Push(int data)
    {
        if (isFull())
            cout <<"can't add \n";
        else
        {
            arr[tos]=data;
            tos++;
        }
    }

    int Pop()
    {
        if (isEmpty())
            return -1;
        else
        {
            tos--;
            return arr[tos];
        }
        //cout << " tos: " <<tos<<endl;
    }

/*
    void ViewContent()
{

    while (!isEmpty())
        Pop();


}
*/


    void operator = (Stack s1)
    {
        tos= s1.tos;
        size = s1.size;
        delete [] arr;
        arr =new int[size];
        for ( int i = 0 ; i<tos;i++)
            arr[i]=s1.arr[i];


    }


    Stack operator + (Stack S2)
    {
        Stack res(size + S2.size);

        for (int i=0;i<tos;i++)
            res.Push(arr[i]);

        for (int i=0 ; i< S2.tos ;i++)
            res.Push(S2.arr[i]);
        //res.tos = tos + S2.tos;
        return res;



    }



    ~Stack()
    {
        delete[] arr;
    }

};





void ViewContent(Stack S)
{

    while (!S.isEmpty())
        cout << "\none element out :"<< S.Pop() <<endl;


}
void ViewContent(Stack *S)
{

    while (!S->isEmpty())
        cout << "\none element out :"<< S->Pop() <<endl;


}
int main()
{
Stack S1;
Stack S2;
Stack S3;

S1.Push(10);
S1.Push(20);

S2.Push(3);
S2.Push(4);
S2.Push(8);
S2.Push(9);

//cout << "\none element out :"<< S1.Pop() <<endl;
//ViewContent(S1);
//cout<<"******************\n";
//ViewContent(S1);
//cout<<"******************\n";
//ViewContent(S2);
//cout<<"******************\n";
S3=S1+S2;

//S1.ViewContent();
cout<<"******************\n";
ViewContent(S3);
cout<<"******************\n";
ViewContent(S1);
cout<<"******************\n";
ViewContent(S2);
cout<<"******************\n";


//ViewContent(&S1);
//cout<<"********88888888**********\n";

//S1.ViewContent();

//cout <<":>>>>>>>> "<<S1.isEmpty()<<endl;

//cout << "\none element out :"<< S1.Pop() <<endl;

    return 0;
}
//rewrite this code to be circular queue isted of stack
