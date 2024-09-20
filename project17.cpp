/* Write a c++ program to print the Minimum number from 6 numbers
using one dimension array.*/
#include <iostream>
using namespace std;
int main()
{
 int num[6], minNum;
 cout <<"Enter Numbers: ";
 for(int i = 0; i<6; i++)
 cin>> num[i];
 minNum = num[0];
 for(int i = 1; i<6; i++)
 if( num[i] < minNum)
 minNum = num[i];
 cout << "Min value = " << minNum ;
 return 0;
}
