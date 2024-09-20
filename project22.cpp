/* Write a c++ program include the following functions:
1. inputArray to enter elements of Two Matrix.
2. sumArr to print the summation of Two Matix.
Note: Matrix means Two Dim Array*/
#include <iostream>
using namespace std;
int arr1[2][3], arr2[2][3], arr3[2][3];
void inputArray(){
 // First Array
 cout <<"Enter numbers of first array:\n";
 for(int i =0; i<2; i++)
 for(int j =0; j < 3; j++)
 cin >> arr1[i][j];
 // Second Array
 cout <<"Enter numbers of Second array:\n";
 for(int i =0; i<2; i++)
 for(int j =0; j < 3; j++)
 cin >> arr2[i][j];
}
void sumArr()
{
 cout <<"Sum of Two Dim array: \n";
 for(int i =0; i<2; i++){ // for of Rows
 for(int j =0; j < 3; j++) // For of Colomn
 cout << arr1[i][j] + arr2[i][j] << " "; //without storing summation
 cout <<endl;
 }
}
int main()
{
 inputArray();
 sumArr();
 return 0;
}
