#include<iostream>
using namespace std;
int factorial(int); /*prototype*/
void main()
{
int number,fact;
cout<<"Enter number : ";
cin>>number;
fact=factorial(number); /*calling BY VALUE*/
cout<<"Factorial of "<<number<<" = "<<fact<<endl;
}

int factorial(int number) /*definition*/
{
int f=1;
for(int i=1;i<=number;i++)
f*=i;
return f;
}