#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <Windows.h>
using namespace std;



struct employee
{
    int id;
    char name[20];
    int salary;
};

class Employess{
    int size = 5;
    employee emp[5];
    int nextIndex;
public:
    Employess()
    {
        nextIndex = 0;
        size =5;
        emp[size];
    }
    Employess(int _size)
    {
        size = _size;
        nextIndex = 0;
        emp[size];

    }
    void addEmp(int index,char name[],int id , int salary )
    {


        //this->emp[index].name=name;
        this->emp[index].id=id;
        this->emp[index].salary=salary;

    }


    void disblay()
    {
        for (int i =0;i<nextIndex;i++)
            cout<<this->emp[i].name<<":"<<this->emp[i].id<<":"<<this->emp[i].salary;

    }

    int searchByID(int target)
    {
        for (int i =0;i<nextIndex;i++)
        {
            if (this->emp[i].id==target)
            {
                cout << "ID found."<<endl;
                cout<<this->emp[i].name<<":"<<this->emp[i].id<<":"<<this->emp[i].salary<<endl;
                return 1;
            }
        }
        cout << "no ID matches given ID."<<endl;
        return 0;
    }

        int searchByName(char* target)
    {
        for (int i =0;i<nextIndex;i++)
        {
            if (this->emp[i].name==target)
            {
                cout << "name found."<<endl;
                cout<<this->emp[i].name<<":"<<this->emp[i].id<<":"<<this->emp[i].salary<<endl;
                return 1;
            }
        }
        cout << "no name matches given name."<<endl;
        return 0;
    }




};

class menu {
    char menuItems[3][10];
    int x;
    int y;
    string defaultColor;
    string highlightedColor;

public:


    void drow()
    {

    }



};


 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
int main()
{



    return 0;
}
