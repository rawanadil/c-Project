/* Write a c++ program to input elements of Two Dim array and print
the array using function called (inputArray). Note: Receive the
declaration of array from the main function.*/
#include <iostream>
using namespace std;
void inputArray(int arr[2][3]){ //2. param
 cout <<"Enter numbers of two dim array:\n";
 for(int i =0; i<2; i++)
 for(int j =0; j < 3; j++)
 cin >> arr[i][j];
 cout <<"Two Dim array: \n";
 for(int i =0; i<2; i++){ // For of Rows
 for(int j =0; j < 3; j++) // For of Column
 cout << arr[i][j] << '\t';
 cout <<endl;
 }
}
int main()
{
 int arr1[2][3]; // 1. Local Variable
 inputArray(arr1);// just name to pass array using function
 return 0;
}
