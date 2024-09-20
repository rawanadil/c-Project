/* Write a C++ program to input two names from user and compare
them and print if they equal or not.
Sol (with ignore case)*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
 char arr1[30], arr2[30];
 int cnt1 =0;
 cout << "Enter any Name: ";
 gets(arr1);
 cout <<"Enter any Name 2: ";
 gets(arr2);
 cnt1 = strcmpi(arr1, arr2); // ignore case
 if(cnt1 == 0)
 cout << "\n Two name is equal ";
 else if (cnt1 < 0)
 cout <<"\n First name is less than. ";
 else
 cout<< "\n Second name is greater.";
 return 0;
}
