/*Write a c++ program to enter 4 * 4 Matrix, Print the array then find
and print the summation of main diagonal.*/
#include <iostream>
using namespace std;
int main()
{ /* int arr[4][4];
 cout <<"Two Dim array: \n";
 for(int i =0; i<4; i++){ // for of Rows
 for(int j =0; j < 4; j++) // For of Col
 cin >> arr[i][j] ;
 }
 cout << "Array:\n";
 for(int i =0; i<4; i++){ // for of Rows
 for(int j =0; j < 4; j++) // For of Col
 cout << arr[i][j] <<" ";
 cout <<endl;
 }
 int sum =0;*/
 for(int i =0; i<4; i++)
 for(int j =0; j < 4; j++)
 if ( i == j)
 sum += arr[i][j];
cout << "\n Sum= " << sum;
 return 0;
}
