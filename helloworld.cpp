
#include <iostream>
#include <string>


using namespace std;

int main()
{
    string s1 = "++X";

    string s2 = "++";

    bool isFound = s1.find(s2) != string::npos;

    cout<<isFound;
}