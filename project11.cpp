/* Write a c++ program to print Global variable from function printNum
and the main function and notice the difference.*/
#include <iostream>
using namespace std;
int num1 =3;
void printNum()
{
 cout <<"Num1 from function: "<< num1 << endl;
}
int main()
{
 printNum();
 num1 +=1; // add 1 to num1 after calling the function
 cout <<"Num1 from main function: "<< num1 << endl;
 return 0;
}

