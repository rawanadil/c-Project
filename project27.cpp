/* Write a C++ program to input two names from user and print the
longest name*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
 char arr1[30], arr2[30];
 int cnt1 =0, cnt2=0;
 cout << "Enter any Name: ";
 gets(arr1); //gets function declared in c++
 cout <<"Enter any Name 2: ";
 gets(arr2);
 for (int i=0 ; arr1[i] != '\0';i++)
 cnt1++;
 for (int j=0; arr2[j] != '\0'; j++)
 cnt2++;
 if(cnt1 >cnt2){
 cout << "\nFirst name is longer: ";
 puts(arr1);
 }
 else
 {
 cout <<"\nSecond name is longer: ";
 puts(arr2);
 }
 return 0;
}
