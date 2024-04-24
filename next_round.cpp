#include<iostream>
#include <vector>
using namespace std;

int main()
{
 int n,k,score,targetScore;
 int pass = 0;

 cin>>n>>k;

 vector<int> scores;

 for(int i=0;i < n;i++){
    cin>>score;
    scores.push_back(score);
 }

 targetScore = scores.at(k-1);

 for(int i=0;i < scores.size();i++){
    if(scores.at(i) >= targetScore && targetScore >= 0 && scores.at(i) > 0){
        pass++;
    }
 }

 cout<<pass; 

 return 0;
}