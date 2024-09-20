// Write a C++ program that include a function sum which receive two
//integers and print the summation.
#include <iostream>
using namespace std;
void sum(int num1, int num2)
{
 cout << num1 + num2;
}
int main()
{
 int n1, n2;
 cout <<"Enter Two Numbers: \n";
 cin >> n1 >> n2;
 sum(n1, n2);
 return 0;
}
