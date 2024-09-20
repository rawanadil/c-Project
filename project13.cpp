/*Write a c++ program that include display function to print multiplication
table of any number entered by user.*/
#include <iostream>
using namespace std;
void display(int num)
{
 for(int i=1 ; i<=10 ; i++)
 cout << num << "*" << i << "=" << i * num <<endl;
}
int main()
{
 int n1;
 while(1)
 {
 cout << "Enter any Number: ";
cin >> n1;
if (n1 == 0)
 break;
 display(i);
 }
 return 0;
}

