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



//leetcode two sum problem
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
         
        for(int i=0;i<nums.size();i++){
        int z=target-nums[i];
        if(mp.find(z)!=mp.end()){
        return {mp[z],i};}

       mp[nums[i]]=i;
        }
     return{};}
    
};
// traditional method for two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
      for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++)
        if(nums[i]+nums[j]==target)
        return {i,j};
      }return {};
        }
    
};

// Online C++ compiler to run C++ program online
// remove duplicates from sorted array
#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int> arr={1,1,2,2,3,3,4,5,5};
   int j=0;
   for(int i=0;i<arr.size();i++){
       if(arr[i]!=arr[i+1] || i==arr.size()-1)
       {arr[j]=arr[i];
       j++;}
       }cout<<"k is : "<<j<<endl;

   for(int i=0;i<j;i++){
       cout<<arr[i];
   }
    return 0;
}
