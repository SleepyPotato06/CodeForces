#include<iostream>
using namespace std;
int main()
{
 int m,n;

 cin>>m>>n;

 int totalSquares = m*n;
 
 float result = totalSquares/2;

 int cast_result = (int)result;

 cout<<cast_result;
 
 return 0;
}