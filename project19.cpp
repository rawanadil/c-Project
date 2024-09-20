/* Write a c++ program to input an element of Two Dim array using
function called (inputArray), declare array as global variable and print
the array from main function.*/
#include <iostream>
using namespace std;
int arr1[2][3]; // Global Variable
void inputArray(){
 cout <<"Enter numbers of two dim array:\n";
 for(int i =0; i<2; i++)
 for(int j =0; j < 3; j++)
 cin >> arr1[i][j];
}
int main()
{
 inputArray();
 cout <<"Two Dim array: \n";
 for(int i =0; i<2; i++){ // For of Rows
 for(int j =0; j < 3; j++) // For of Column
 cout << arr1[i][j] << '\t';
 cout <<endl;
 }
 return 0;
}
