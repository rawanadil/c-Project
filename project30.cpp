/*Write a C++ program to input 4 students’names from user and print
their names.*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
 char arr1[4][30];
 cout << "Enter any Name: ";
 for(int i=0; i<4;i++)
 gets(arr1[i]);
 cout << "Students' Names: \n";
 for(int j=0; j<4; j++)
 puts(arr1[j]);
 return 0;
}
