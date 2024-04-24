// Example program
#include <iostream>
#include <string>

int main()
{
  int n;
    
  std::cin>>n;
  
  std::string words[n];
  for(int i=0; i < n; i++){
        std::cin>>words[i];
    }
    
  for(int i=0; i < n; i++){
        int y = words[i].length();
        if(y >= 10){
            int z = y-2;
            std::cout<<words[i].at(0)<<z<<words[i].at(y-1)<<std::endl;
        }else{
            std::cout<<words[i]<<std::endl;
        }
    }    
  return 0;
}