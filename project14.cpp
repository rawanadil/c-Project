/* Write a c++ program that include display function to print multiplication
table from 2 to 4.*/
#include <iostream>
using namespace std;
void display(int num)
{
 for(int i=1 ; i<=10 ; i++)
 cout << num << "*" << i << "=" << i * num <<endl;
}
int main()
{
 for(int i = 2; i<=4; i++)
 {
 display(i);
 cout << "********\n";
 }
 return 0;
}
