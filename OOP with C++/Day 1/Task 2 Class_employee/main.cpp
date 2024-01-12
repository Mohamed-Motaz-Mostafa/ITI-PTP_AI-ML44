#include <iostream>
#include<string>
using namespace std;

class Employee
{
    string name;
    int ID;
    int salary;

public:
    void setID(ind _id)
    {
        ID = _id;
    }

    void setName (string _name)
    {
        name = _name;
    }

    void setSalary(int _Salary)
    {
        salary = _Salary;
    }

    int getID()
    {
        return ID;
    }

    int getSalary()
    {
        return salary;
    }

    string getName()
    {
        return name;
    }


};



/*
// Employee project using array-based lest
#include <iostream>
#include<string>
using namespace std;
struct employee {
    string name ;
    int age ;
    double salary ;
    char gender ;
};
class arrayListType {
    int maxSize;
    int length ;
    employee * data;

public:
    arrayListType(int s)
    {
        if (s<0)
        maxSize=10;
        else
        maxSize=s;
        length=0;
        data= new employee[maxSize] ;
    }
    bool isEmpty()
    {
        return length==0 ;
    }
    bool isFull()
    {
        return length == maxSize ;
    }
    void print()
    {
        if(isEmpty())
        cout<<"the lest is empty .....!\n\a";
        cout<< " there are "<< length << " employee(s) ";
        for(int i =0 ;i< length ; i++  )
        {
            cout<<"\nemployee name : "<<   data[i].name<<endl;
            cout<<" employee age : "<<      data[i].age<<endl;
            cout<<" employee salary : "<<data[i].salary<<endl;
            cout<<" employee gender : "<<data[i].gender<<endl;
            cout<<"****************************************************\n";
        }
    }
    void delete_by_age()
    {
        int age1,age2;
        cout<< " enter start age : ";
        cin>>age1;
        cout<< " enter end age :" ;
        cin>>age2;
        for(int i =0 ; i<length ; i++ )
        {
            if (data[i].age >= age1 && data[i].age <= age2)
            {
                for(int j = i ; j < length ; j++)
                {
                    data[j]=data[j+1];
                    i--;
                }
                length--;
            }
        }
    }
    employee get_data() // function to get employee data
    {
        employee emp ;
        cout << "enter the employee's name: ";
        cin >> emp.name;
        cout << "enter the employee's age: ";
        cin >> emp.age;
        cout << "enter the employee's salary: ";
        cin >> emp.salary;
        cout << "enter the employee's gender: ";
        cin >> emp.gender;
        return emp ;
    }
    void insert()
    {
        if(isFull())
        cout<<"can't add , the lest is full";
        else
        {
            data[length]=get_data();
            length++;
        }
    }

    void Update_salary()
    {
        if(isEmpty()){
            cout<<"the lest is empty .....!\n\a";
            return;
        }

        string n; //name of employee
        double s; // employee new salary
        cout<<" Enter employee name : ";
        cin>>n;
        cout<< " Enter employee new salary :";
        cin>>s;
        for(int i =0 ; i<length ; i++)
        {
            if(data[i].name==n)
            {
                data[i].salary=s;
            }
        }
    }
};

int main()
{
    char s ;
    //arrayListType ar;
   arrayListType empp = arrayListType(20);
    while (1)
    {
        cout << "Enter your choice : " << endl;
        cout <<
"1) add new Employee\n \
2) print all Employees\n \
3) delete by age\n \
4) Update salary by name\n \
5) type 'q' to exit\n";
            cin >> s;
        switch (s)
        {
        case '1':
            empp.insert();
            break;
        case '2':
            empp.print ();
            break;
        case '3':

            empp.delete_by_age();
            break;
        case '4':
            empp.Update_salary();
            break;
        default:
            break;
        }
        if (s == 'q' || s == 'Q'|| s=='5'){
             cout<<"\a";
             break;
        }


    }
    return 0;
}
*/



