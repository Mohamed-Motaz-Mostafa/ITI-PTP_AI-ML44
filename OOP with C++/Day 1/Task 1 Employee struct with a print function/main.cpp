#include <iostream>
#include<string>
using namespace std;


struct employee {
    string name ;
    int age ;
    double salary ;
    char gender ;

    void print() {
        cout<<"\nemployee name : "<< name<<endl;
        cout<<"employee age : "<< age<<endl;
        cout<<"employee salary : "<<salary<<endl;
        cout<<"employee gender : "<<gender<<endl;
        cout<<"****************************************************\n";
    }

};
int main()
{
    employee emp ;
    emp.name = "ali";
    emp.age = 55;
    emp.salary = 8888;
    emp.gender = 'M';
    emp.print();
    return 0;
}


