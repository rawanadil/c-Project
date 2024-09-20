/*Write a C++ program to input any name (char array) from user and
print name with upper case.*/
#include <iostream>
#include <stdio.h> //Library for gets, puts
using namespace std;
int main()
{
 char arr1[30];
 cout << "Enter any Name: ";
 gets(arr1); //gets function declared in c++
 for (int i=0 ; arr1[i] != '\0';i++)
 if(arr1[i] >= 'A' && arr1[i]<='Z')
 arr1[i] = arr1[i] + 32;//Upper Case
 puts(arr1);
 return 0;
}
