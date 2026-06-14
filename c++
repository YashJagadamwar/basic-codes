// Online C++ compiler to run C++ program online
// code for intersection of an array 
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
  
  vector<int> arr1={1,2,3,4,1};
  vector<int> arr2={8,9,1,2};
  unordered_map<int,int> mp1;
  unordered_map<int,int> mp2;
  for(int x : arr1)
  mp1[x]++;
  for(int y : arr2)
  mp2[y]++;
  for(auto p : mp1){
      
      if(mp2.find(p.first) != mp2.end())
      cout<<p.first<<endl;
  }
  
  
    return 0;
}
