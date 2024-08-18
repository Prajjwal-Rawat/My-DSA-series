#include <iostream>
#include <vector>
using namespace std;

// --------------------------------            Question                  ------------------------

// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.


// ----------------------------             Answer           -----------------------------



void PowerSets(vector<int> arr, int index, vector<int> output, vector<vector<int> > &ans){

    if (index >= arr.size())
    {
        ans.push_back(output);
        return ; 
    }

    // exclude 
    PowerSets(arr, index + 1, output, ans);

    //include
    int element = arr[index];
    output.push_back(element);
    PowerSets(arr, index+1, output, ans);
    
}


int main(){
    vector<int> arr = {1,2,3};

    vector<int> output;             
    vector<vector<int> > ans;
    int index = 0;
    PowerSets(arr,index,output,ans);

    for (int i = 0; i < ans.size(); i++)
    {
       cout<<"{";
       for (int j = 0; j < ans[i].size(); j++)
       {
          cout<<ans[i][j];
          if (j < ans[i].size() -1)
          {
            cout<<",";
          }
          
       }
       cout<<"}";
       
    }
    
    
}