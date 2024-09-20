//Write a C++ program that include a function max which receive two
//integers and return the larger.
//1. (Call Function by value),2. (Call by Name of function)
#include <iostream>
using namespace std;
int max (int x , int y)
{
 if (x > y )
 return x;
 else
 return y;
}
int main()
{
 int N1, N2;
 cout<<"Enter two numbers:";
 cin >> N1>> N2;
 int MaxNum = max(N1,N2);
 cout<<"\nThe max number is " << MaxNum;
 return 0;
}
//2
#include <iostream>
using namespace std;
int max (int x , int y)
{
 if (x > y )
 return x;
 else
 return y;
}
int main() {
 int N1, N2;
 cout<<"Enter two numbers:";
 cin >> N1>> N2;
 cout<<"\nThe max number is " << max(N1,N2);
 return 0;
 }
