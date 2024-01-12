#include <iostream>
using namespace std;

class CircularQueue {
    int size = 5;
    int* arr;
    int front;
    int rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    CircularQueue(int _size) {
        size = _size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    int isEmpty() {
        if (front == -1 && rear == -1) {
            cout << "Circular Queue is Empty.\n";
            return 1;
        }
        else {
            // cout << "Circular Queue is not Empty.\n";
            return 0;
        }
    }

    int isFull() {
        if ((rear + 1) == front) {
            cout << "Circular Queue is Full.\n";
            return 1;
        }
        else if(front==0 && rear== size -1)
        {
            cout << "Circular Queue is Full.\n";
            return 1;
        }
        else // cout << "Circular Queue is not Full.\n";
            return 0;
    }

    void Enqueue(int data) {
        if (isFull())
            cout << "Can't enqueue\n";
        else {
            if (front == -1)
                front = 0;
           /*
            if(rear +1 ==size )
                rear=0;
            else
                rear++;
            */
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
    }

    int Dequeue() {
        if (isEmpty())
            return -1;
        else {
            int removedData = arr[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front = (front + 1) % size;
            }
            return removedData;
        }
    }

    int Peek()
    {
        if(isEmpty())
            return -1;
        return arr[front];
    }




    CircularQueue operator = (CircularQueue& other)
    {
        size = other.size;
        front = other.front;
        rear = other.rear;
        delete [] arr;
        arr =new int[size];
        for ( int i = 0 ; i<size;i++)
            arr[i]=other.arr[i];
    }

    ~CircularQueue()
    {
        delete[] arr;
    }
};

void ViewContent(CircularQueue& CQ) {
    while (!CQ.isEmpty())
        cout << "\nOne element dequeued: " << CQ.Dequeue() << endl;
}

int main() {
    CircularQueue CQ1;
    CircularQueue CQ2;
    CircularQueue CQ3;

    CQ1.Enqueue(10);
    CQ1.Enqueue(20);

    CQ2.Enqueue(3);
    CQ2.Enqueue(4);
    CQ2.Enqueue(8);
    CQ2.Enqueue(9);

    CQ3 = CQ1;

    cout << "******************\n";
    ViewContent(CQ1);
    cout << "******************\n";
    ViewContent(CQ2);
    cout << "******************\n";
    ViewContent(CQ3);

    return 0;
}
