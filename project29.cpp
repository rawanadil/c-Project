/* Write a C++ program to input name from user and copy it to another
array. (Print names)*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
 char arr1[30], arr2[30];
 cout << "Enter any Name: ";
 gets(arr1); //gets function declared in c++
 strcpy(arr2,arr1);
 cout<< "First String: ";
 puts(arr1);
 cout<< "Second String: ";
 puts(arr2);
 return 0;
}
