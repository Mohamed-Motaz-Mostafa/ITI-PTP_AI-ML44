#include<stdio.h>
#include<stdlib.h>
/*
To return more than one value from a function using struct
and pointers. Swap function
*/
// struct
struct calc {

int add;
int sub ;
int mult;
};
// function decleraton
struct calc calcf(int num1 , int num2);
void swap (int * a , int * b );
void calc_using_pointers(int * Add_ptr, int * Sub_ptr ,int * Mult_ptr , int num1 , int num2);


// Global variabule
int G =120;

void prG()
{
printf("%d ",G);
}

int main()
{

  //  printf("%d /n",G);
//  extern G= 370;
//   prG();

   int N1= 50;
   int N2 = 25;
   struct calc Ans;

   printf( "N1----> %d N2----> %d \n",N1, N2 );

   Ans = calcf(N1,N2);
   printf("Addition :  %d Subtraction: %d Multiplied : %d \n",Ans.add,Ans.sub,Ans.mult);

   int  Add,  Sub ,  Mult ;
   calc_using_pointers( & Add, &Sub , &Mult ,  N1 , N2);
   printf("Using pointers --> Addition :  %d Subtraction: %d Multiplied : %d \n",Add,Sub,Mult);

   swap( &N1 , &N2 );
   printf( "Swaping : N1----> %d N2----> %d \n",N1, N2 );

    return 0;

}

void swap (int * a , int * b )
{

int temp =* a;
*a = *b ;
*b = temp ;

}

struct calc calcf(int num1 , int num2)
{

 struct calc ans ;
 ans.add = num1+ num2;
 ans.sub = num1 - num2;
 ans.mult = num1 * num2;

return ans;
}

void calc_using_pointers(int * Add_ptr, int * Sub_ptr ,int * Mult_ptr , int num1 , int num2)
{
    * Add_ptr = num1 + num2 ;

    * Sub_ptr = num1 - num2 ;

    * Mult_ptr= num1 * num2 ;
}
