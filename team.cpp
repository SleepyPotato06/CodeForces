#include<iostream>
#include <vector>
using namespace std;

int main()
{
 int n;
 int p,v,t;
 int implementProblem = 0;
 vector<int> implementBoolean;

 cin>>n;

 for(int i=0;i < n;i++){
      int truthCounter = 0;
      
      cin>>p>>v>>t;
      
      implementBoolean.push_back(p);
      implementBoolean.push_back(v);
      implementBoolean.push_back(t);

      for(int j=0;j < 3;j++){
         if(implementBoolean[j] == 1){
            truthCounter++;
         }
   }
   if(truthCounter >= 2){
      implementProblem++;
   }
   //Empty the vector
   implementBoolean.clear();   
 }

   cout<<implementProblem;
 return 0;
}