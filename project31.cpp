/* Write a C++ program to input 4 students’ names and the marks of 6
subjects for each one of them after that calculate the average and print it.*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
const int stuN = 4; // make number of students const
int main()
{
 char arr1[stuN][30];
 double mark[stuN][6], avg=0.0;
 int sum=0;
 for(int i=0; i<stuN;i++)
 {
 cout << "Enter any Name: ";
 gets(arr1[i]);
 cout << "Enter Marks: \n";
 for(int j =0; j<6 ; j++)
 cin>> mark[i][j];
 getchar();
 }
 for(int i =0; i<stuN; i++)
 {
 sum=0;
 for( int j = 0; j<6 ; j++)
 sum += mark[i][j];
 avg = sum/6;
 cout << "\nAverage for ";
 puts(arr1[i]);
 cout << "=" << avg;
 }
 return 0;
}
