// Write a c++ program that include function sum receive two integer numbers and
//return the summation.

#include <iostream>
using namespace std;
int sum(int a , int b)
{
//int result;
//result =a+b;
return a + b;
}
int main()
{
 int x,y,s;
 for(int i =1; i<=3; i++)
 {
 cout<<"\nEnter two numbers: ";
 cin>>x>>y;
 cout<<"Sum= "<< sum(x,y);
 }
 return 0;
}
