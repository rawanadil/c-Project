//Write a c++ program to add 6 numbers using array and print the average
#include <iostream>
using namespace std;
int main()
{
 int num[6], sum = 0;
 cout <<"Enter Numbers: ";

 for(int i = 0; i<6; i++)
 cin>> num[i];
 for(int i = 0; i<6; i++)
 sum += num[i];
 float avg = sum /6;
 cout << "Average = " << avg ;
 return 0;
}
