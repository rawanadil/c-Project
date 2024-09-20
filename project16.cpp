/* Write a c++ program to print the maximum number from 6 numbers using
one dimension array*/
#include <iostream>
using namespace std;
int main()
{
 int num[6], maxNum;
 cout <<"Enter Numbers: ";
 for(int i = 0; i<6; i++)
 cin>> num[i];
 maxNum = num[0];
 for(int i = 1; i<6; i++)
 if( num[i] > maxNum)
 maxNum = num[i];
 cout << "max value = " << maxNum ;
 return 0;
}
