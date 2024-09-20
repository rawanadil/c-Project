/*Write a c++ program to enter 2 * 3 Matrix, Print the array then
find and print the summation of each row.*/
#include <iostream>
using namespace std;
int main()
{ int arr[2][3];
 cout <<"Two Dim array: \n";
 for(int i =0; i<2; i++){ //For of Rows
 for(int j =0; j < 3; j++) //For of Col
 cin >> arr[i][j] ;
 }
 cout << "Array:\n";
 for(int i =0; i<2; i++){ //For of Rows
 for(int j =0; j < 3; j++) // For of Col
 cout << arr[i][j] <<" ";
 cout <<endl;
 }
 for(int i =0; i<2; i++){
 int sum=0;
 for(int j =0; j < 3; j++)
 sum += arr[i][j];// summation
 cout << "\nSum of row "<< i << ":" <<sum;
 cout << endl;
 }
 return 0;
}
