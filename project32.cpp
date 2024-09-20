/* Write a C++ program to input 4 students’ names and print the
number of student that their names is "Ali Ahmed". (with ignore case)*/
#include <iostream>
#include <stdio.h> //gets of string from user
#include <string.h>
using namespace std;
int main()
{
 int stuN = 4,cnt;
 char arr1[stuN][30];
 cout << "Enter any Name: ";
 for(int i=0; i<stuN;i++)
 gets(arr1[i]);
 for(int i =0; i<stuN; i++)
 if(strcmpi(arr1[i],"Ali Ahmed") == 0)
 cnt++;// cnt = cnt +1
 cout<< "Numbers: " <<cnt;
 return 0;
}
