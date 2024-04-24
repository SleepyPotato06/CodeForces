#include<iostream>
#include <string> 

using namespace std;
int main()
{
 int n;
 int X = 0;
 string input;

 cin>>n;

 for(int i=0;i < n;i++){
    cin>>input;
    bool isFound = input.find("++") != string::npos;

    if(isFound == 1){
        ++X;
    }else{
        --X;
    }
 }

 cout<<X;
 return 0;
}