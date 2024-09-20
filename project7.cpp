 /*Write a c++ program that include function sample that adds three numbers (one of
them from main function and the other from sample function) then print the result using
reference from the main function.*/
#include <iostream>
using namespace std;
void sample(int& x)
{
 int n1 = 2;
 int n2= 3;
 x = x + n1 +n2; //x = 15
}
int main()
{
 int a=10;
 sample(a);
 cout << a <<endl;
 return 0;
}
