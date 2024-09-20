// Write a c++ program to swap two numbers using swapNum function that
//receive two numbers from user using call by reference. (Print result from the
//main function)
#include <iostream>
using namespace std;
void swapNum(int& num1, int& num2)
{
 int num3 = num1;
 num1 = num2;
 num2 = num3; // num3 = num1
}
int main()
{
 int n1,n2;
 cout << "Enter Numbers: " << endl;
 cin>> n1 >> n2;
 swapNum(n1, n2);
 cout <<"Num1 is "<< n1 << endl;
 cout << "Num2 is " <<n2;
 return 0;
}
