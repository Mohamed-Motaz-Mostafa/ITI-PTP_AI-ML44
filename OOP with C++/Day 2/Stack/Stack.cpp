#include <iostream>

using namespace std;


class Stack
{
    int size = 6;
    int arr[6];
    int tos;

public:
    Stack()
    {
        tos = 0;
    }
    int isEmpty()
    {
        if (tos == 0)
        {
            cout << "Stack is Empty.\n";
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

    void Pop()
    {
        tos--;
        cout << "\none element out :"<< arr[tos]<<endl;
        //cout << " tos: " <<tos<<endl;
    }

    Stack operator = (Stack S1)
    {
        size= S1.size;
        tos=S1.tos;
        for (int i=0;i<S1.tos;i++)
            arr[i]=S1.arr[i];

    }
};

void ViewContent(Stack S)
{

    while (!S.isEmpty())
        S.Pop();


}

int main()
{
Stack S1;
Stack SS;
S1.Push(10);
S1.Push(20);
S1.Push(30);
S1.Push(40);
S1.Push(50);
S1.Push(60);
SS=S1;

S1.Pop();
cout<<"******************\n";
ViewContent(S1);
cout<<"******************\n";
ViewContent(SS);




    return 0;
}
