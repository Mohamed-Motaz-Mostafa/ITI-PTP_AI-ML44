#include <iostream>
#include<string.h>

using namespace std;

class person{

    int age;
    int id;
    char name[20];
public:

    person()
    {
        age=1;
        id=0;
        strcpy(name,"NoName");
    }


    person( char *_name  , int _id=1,int _age = 1)
    {
        age=_age;
        id=_id;
        strcpy(name,_name);
    }

    person(int _age, char *_name  , int _id)
    {
        age=_age;
        id=_id;
        strcpy(name,_name);

    }



    void setAge(int _age)
    {
        age=_age;
    }

    void setID(int _id)
    {
        id=_id;
    }

    void setName(char *_name)
    {
        strcpy(name,_name);
    }

    char* getName(){return name;}

    int getAge(){return age;}

    int getID(){return id;}

    void print()
    {
        cout<<id<<":"<<age<<":"<<name;
    }


};

class student : public person{

    char grade;
public:
    student():person()
    {
        grade='-';

    }

    student( char *_name  , int _id=1,int _age = 1,char _grade='-'):person(_name,_id,_age)
    {
        grade=_grade;

    }

    void setGrade(char _grade)
    {
        grade=_grade;
    }

    char getGrade()
    {
        return grade;
    }

    void print()
    {
        person::print();
        cout<<":"<<grade;
    }


};


class employee :public person{

    int salary;

public:

    void setSalary(int _salary){salary=_salary;}

    int getSalary(){return salary;}

    employee():person()
    {
        salary=2500;
    }

    employee( char *_name  , int _id=1,int _age = 1):person(_name,_id,_age)
    {
        salary=2500;
    }

    employee( char *_name  , int _id=1,int _age = 1 ,int _salary = 2500):person(_name,_id,_age)
    {
        salary=_salary;
    }



};

int main()
{
    person p1;
    p1.setID(7);
    p1.setAge(25);
    p1.setName("Mohamad");
    p1.print();

    char name1[10]={"aly"};
    student S1(name1,88,22);
    cout<<endl;
    S1.print();

    p1=S1;
    cout<<"\n*************************\n";
    p1.print();


    return 0;
}
