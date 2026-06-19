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



// Online C++ compiler to run C++ program online
// move zeros
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int count=0,j=0;
   vector<int> arr={1,0,1,0,2,0,0,2,3,3,4,5,5};
   vector<int>ans;
 int z=arr.size();
 for(int i=0;i<z;i++){
     if(arr[i]==0){
     count++;
     }
     else{
         ans.push_back(arr[i]);
     }}
     for(int i=0;i<count;i++){
         ans.push_back(0);
     }
   for(int x : ans){
       cout<<" "<<x;
   }
    return 0;
}


// Online C++ compiler to run C++ program online
// move zeros without using vector array
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int j=0;
   vector<int> arr={1,0,1,0,2,0,0,2,3,3,4,5,5};
  
 int z=arr.size();
 for(int i=0;i<z;i++){
     if(arr[i]==0){
     
     continue;
     }arr[j]=arr[i];
     j++;
   }
   for(int i=j;i<arr.size();i++){
       arr[i]=0;
   }
   for(int x : arr)
   cout<<" "<<x;
    return 0;
}


// Online C++ compiler to run C++ program online
// remove element without in-place (can use another array) with count of value
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int val,count=0,j;
 vector<int> arr={1,2,3,4,5,4,1,2,3,4,2};
 vector<int> ans;
 cout<<"enter the value : ";
 cin>>val;
 for(int i=0;i<arr.size();i++){
     if(arr[i]==val){
         count++;
         continue;
     }
         ans.push_back(arr[i]);
     
 }cout<<"count is "<<count<<endl;
 for(int x : ans)
 cout<<" "<<x;

    return 0;
}

//remove element in-place
//leetcode Q.27

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int k=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
        nums[k]=nums[i];
        k++;}
      }  return k;
    }
};


// longest coomon prefix
// leetcode Q14
#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
  vector<string> s={"flower","flow","float"};
 
  if(s.empty())
  return 0;
  for(int i=0;i<s[0].size();i++){
  char ch=s[0][i];
  for(int j=1;j<s.size();j++){
      if(i>=s[j].size() || s[j][i]!=ch)
     { cout<< s[0].substr(0,i);
      return 0;}
  }
 }cout<<s[0];
   return 0;

}



// Online C++ compiler to run C++ program online
// leetcode-121
//best time to buy and sell stocks
#include <iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> arr={10,2,8,5,1};
  if(arr.empty()){
      cout<<0;
      return 0;
  }
  int minprice=arr[0],maxprofit=0;
  
  for(int i=0;i<arr.size();i++){
      if(arr[i]<minprice){
          minprice=arr[i];
      }
      int profit=arr[i]-minprice;
      if(profit>maxprofit){
          maxprofit=profit;
      }
      
  }
  cout<<maxprofit;
  
    return 0;
}