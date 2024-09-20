// Write a c++ program to print the summation of two array with size 3
#include <iostream>
using namespace std;
int main()
{
 int arr1[3], arr2[3], arr3[3];
 cout <<"Enter Numbers of arr1: ";
 for(int i = 0; i<3; i++)
 cin>> arr1[i];
 cout <<"Enter Numbers of arr2: ";
 for(int i = 0; i<3; i++)
 cin>> arr2[i];
 for(int i = 0; i<3; i++)
 arr3[i]=arr1[i]+arr2[i];
 cout << "Sum of two array:\n " ;
 for(int i = 0; i<3; i++)
 cout << arr3[i] <<" ";
 return 0;
}
