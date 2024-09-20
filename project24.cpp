/* Write a c++ program to enter 2 * 3 Matrix, Print the array then find
and print the average of even numbers in matrix.*/
#include <iostream>
using namespace std;
int main()
{ int arr[2][3];
 cout <<"Two Dim array: \n";
 for(int i =0; i<2; i++){ // for of Rows
 for(int j =0; j < 3; j++) // For of Col
 cin >> arr[i][j] ;
 }
 cout << "Array:\n";
 for(int i =0; i<2; i++){ // for of Rows
 for(int j =0; j < 3; j++) // For of Col
 cout << arr[i][j] <<" ";
 cout <<endl;
 }
 float sum =0.0, n =0;
 for(int i =0; i<2; i++)
 for(int j =0; j < 3; j++)
 if (arr[i][j] % 2 == 0)
 {
 sum += arr[i][j];
 n++;// n = n+ 1
 cout << "\nsum at "<<i <<" and "<< j<<" = "<< sum << " N : " << n;
 }
 float avg = sum /n;
 cout << "\n Avg= " << avg;
 return 0;
}
