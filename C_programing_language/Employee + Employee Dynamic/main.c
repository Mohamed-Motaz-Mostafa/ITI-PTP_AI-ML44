#include <stdio.h>
#include <stdlib.h>

#define Size 30

struct Employee {

    int ID;
    char name[20];
    int salary ;
    int age ;

};

void Insert_Employee(struct Employee[]);
void Delete_Employee(struct Employee[], int Index );
void add_emp(struct Employee[], int Index );
void print_one_emp(struct Employee[], int Index);
void print_All_Employee(struct Employee[]);
int Valed_ID(struct Employee[] ,int ID);
int checker(char input[],char check[]);
void Delete_Employee_By_Name(struct Employee[]);
void Delete_All_Employees(struct Employee[]);








int main()
{
    int emp_size;
    printf("Enter number of employees:");
    scanf("%d", &emp_size);
    struct Employee* All_Employee = (struct Employee*)malloc(emp_size * sizeof(struct Employee));
    //struct Employee All_Employee[Size];
    Delete_All_Employees(All_Employee);

    char ch ;
     while (1)
    {
        printf( "\nEnter your choice : \n");
        printf(
" 1) add new Employee\n \
2) print all Employees\n \
3) delete by name\n \
4) type 'q' to exit\n");

            scanf(" %c",&ch);
        switch (ch){
        case '1':
            Insert_Employee( All_Employee);
            break;
        case '2':
             print_All_Employee(All_Employee);
            break;
        case '3':

             Delete_Employee_By_Name(All_Employee);
            break;
        default:
            break;
        }
        if (ch == 'q' || ch == 'Q' || ch=='4'){
             printf("\a");
             break;
        }


    }
    return 0;
}


void Insert_Employee(struct Employee Employee[])

{
    int flag= 1;
    while(flag)
        {
            printf( " \n please Enter Index \n ");
            int index;
            scanf(" %d",&index);

            if (index>Size){
            printf("Invalid index !!!! Insertion Failed ");
            printf("\n!!! Enter a valid index !!!\n ");
}
            else if  (Employee[index].ID != -1)
            {
                printf(" This Index is already equipped by an employee !!!! \n");
                print_one_emp( Employee,index);
                printf("would you like to overwrite ??\ntype Y for yes and N for No ");

                char Ans;

                scanf(" %c",&Ans);

                if (Ans == 'Y' || Ans == 'y')
                {
                    add_emp(Employee,index );
                    flag = 0;
                }
                else{
                    printf("\ncanceling insertion......\n");
            }
            }

            else
                add_emp(Employee,index );
                flag = 0;

    }

}


void Delete_Employee(struct Employee Employee[], int Index )
{
    printf( " \n please Enter Index to delete. \n ");
    int index;
    scanf("%d",&index);
    Employee[Index].ID = -1;
}


void add_emp(struct Employee Employee[], int index )
{


    printf("\nNew ID : ");
    int new_ID;
    scanf("%d",&new_ID);
    new_ID = Valed_ID(Employee ,new_ID);
    Employee[index].ID=new_ID;
    if (new_ID != -1 )
        {
            printf("\nNew name : ");
            char new_name[20];
            scanf("%s",&new_name);
            for ( int i =0 ; i<20 ; i++)
            {
                Employee[index].name[i]=new_name[i];
            }

            printf("\nNew age : ");
            int new_age;
            scanf("%d",&new_age);
            Employee[index].age=new_age;

            printf("\nNew salary : ");
            int new_salary;
            scanf("%d",&new_salary);
            Employee[index].salary=new_salary;
        }
    else
    {
            printf("\n canceling insertion......\n");
    }
}

void print_one_emp(struct Employee Employee[], int index)
{
     printf(" ID : %d \n Name : %s \n Age : %d \n Salary : %d \n",Employee[index].ID,Employee[index].name,Employee[index].age,Employee[index].salary);
}

void print_All_Employee(struct Employee Employee[])
{
    for (int i = 0 ; i<Size; i++ )
    {
        printf("\n*****************************************\n");
        print_one_emp(Employee, i);
    }
}


int Valed_ID(struct Employee Employee[] ,int ID)
{
    for (int i =0 ; i<Size ; i++)
    {
        if (Employee[i].ID == ID)
        {
            printf("\n!!! repeated ID !!!\n");
            print_one_emp(Employee, i);
            printf(" \n Enter different ID or -1 to cancel \n ");
            scanf("%d",&ID);
            return ID;
        }

    }
    return ID;
}

void Delete_Employee_By_Name(struct Employee Employee[])
{
    printf("\n name to delete : ");
    char new_name[20];
    scanf("%s",&new_name);

    int check;
    for ( int i = 0 ; i< Size ; i++)
    {
        check = checker(Employee[i].name,new_name);
        if (check == 1)
        {
        printf("Employee found and deleted.\n");
        print_one_emp(Employee, i);
        Employee[i].ID= -1;
        break;
        }
    }
    if ( check != 1)
     printf("\n can't find employee check the name and try again.\n ");
}



int checker(char input[],char check[])
{
    int i,result=1;
    for(i=0; input[i]!='\0' || check[i]!='\0'; i++)
    {
        if(input[i] != check[i])
        {
            result=0;
            break;
        }
    }
    return result;
}

void Delete_All_Employees(struct Employee Employee[])
{
        for ( int i = 0 ; i<Size ; i++)
        {
            Employee[i].ID=-1;
        }

}





