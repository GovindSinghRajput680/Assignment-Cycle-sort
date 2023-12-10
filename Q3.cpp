#include<iostream>
#include<vector>
using namespace std;
//Q 3 Leetcode -> 442
 vector<int> findDuplicates(vector<int>& nums) {int n = nums.size();
    vector<int> ans;
   int i =0;
   while(i<n){
       if(nums[i] == i+1 || nums[nums[i]-1] == nums[i]) i++;
       else swap(nums[i],nums[nums[i]-1]);
   }
   for(int i =0;i<n;i++){
       if(nums[i] != i+1) ans.push_back(nums[i]);
   }
 return ans;       
    }
int main(){int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements in the array : ";
    for(int i =0;i<n;i++) cin>>v[i];
    cout<<"Duplicates are : ";
    vector<int> ans = findDuplicates(v);
    for(int i =0;i<ans.size();i++) cout<<ans[i]<< " ";

}