//Write a c++ program that include function input that receives integer number using
//reference, add two numbers in the main function.
#include <iostream>
using namespace std;
void input(int& x)
{
 cout <<"Enter Num: ";
 cin >> x;
}
int main()
{
 int n1,n2;
 input(n1);// n1 = x
 input(n2);// n2 = x
 cout << "Sum= " << n1 + n2<< endl;
 return 0;
}
