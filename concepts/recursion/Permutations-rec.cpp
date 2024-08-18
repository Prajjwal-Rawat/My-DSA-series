#include <iostream>
#include <vector>
using namespace std;


// ---------------------------------        Question            ------------------------
// --------------------------------        Permutations by recursion        -----------------------------

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
//  ------------------  isme in any order likha hai to hum backtracking kre ya na kre koi frak nhi pdta but agr order mai dena hota to hume backtrack krna pdta


void permutation(vector<int> nums, vector<vector<int>> &ans, int index){

    if(index >= nums.size()){
        ans.push_back(nums);              // nums isliye store kr rhe  hai ans mai kuki hum sidha nums mai changes kr rhe hai 
        return ;
    }

    for (int j = index; j < nums.size(); j++)       // j = index ke brabr rkhenge suru mai kuki hume phle wale element ko khud hi se swap krwana hai 
    {
        swap(nums[index], nums[j]);                  // idhr swap kr rhe hai taki hr ek ki baari aa ske like phle 1 ki then 2 ki then 3 ki 
        permutation(nums, ans, index + 1);
        // backtracking
         swap(nums[index], nums[j]);                // now ye hum tb use krenge jb hume order mai dena ho -- so isse hoga kya ki nums mai jo change honge vo vapas original form mai aa jaenge
    }
    
}


vector<vector<int> >permut(vector<int>& nums){
    vector<vector<int>> ans;
    int index = 0;

    permutation(nums, ans, index);
    return ans;
}


int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = permut(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
            if(j < ans[i].size() - 1){
                cout<<",";
            }
        }cout<<"}, ";
        
    }
    
}