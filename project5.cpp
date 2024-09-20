//: Write a c++ program that include functions:
//1. test receive one integer number to print a message after checking if it is positive or
//negative or zero and then check if is odd or even.
//2. input to receive an integer number from user.
//Test two numbers and add them by using the main function.
#include <iostream>
using namespace std;
void test(int a)
{
 if (a > 0)
 {
 if(a % 2 == 0)
 cout <<"Num is pos and even\n";
 else
 cout <<"Num is pos and odd\n";
 }
 else if (a<0)
 {
 if(a % 2 == 0)
 cout <<"Num is Neg and even\n";
  else
 cout <<"Num is Neg and odd\n";
 }
 else
 cout <<"Num is 0";
}
int input()
{
 int x;
 cout <<"Enter Num: ";
 cin >> x;
 return x;
}
int main()
{
 int num;
 for (int i =1; i<=2;i++)
 {
 num = input();
 test(num);
 }
 int n1= input();
 int n2 = input();
 cout << "Sum= " << n1 + n2;
 return 0;
}
