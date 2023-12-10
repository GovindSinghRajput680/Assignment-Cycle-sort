#include<iostream>
using namespace std;
#include<vector>
//Q 2->Leetcode -> 645
vector<int> findErrorNums(vector<int>& nums) {int n = nums.size();
    vector<int> v(2);
    int i =0;
    while(i<n){
        if(nums[i] == i+1 || nums[nums[i]-1] ==nums[i] ) i++;
        else swap(nums[i],nums[nums[i]-1]);
    }
for(int i =0;i<n;i++) if(nums[i] != i+1) {
    v[0] = nums[i];
    v[1] = i+1;
    return v;
}
    return v;    
    }
int main(){vector<int> v = {2,2,3,4,5};
            vector<int> ans = findErrorNums(v);
            cout<<"Repeted element is "<<ans[0];
            cout<<endl<<"Missing number is "<<ans[1];
            
            }