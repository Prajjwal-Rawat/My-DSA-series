#include <iostream>
#include <vector>
using namespace std;


// ---------------------           Letter Combinations of a Phone Number              --------------------------

// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.


void keypad(string str, int index, string output, vector<string> &ans, string mapping[]){
    if(index >= str.length()){
      ans.push_back(output);
      return ;
    }

     int number = str[index] - '0';
     string value = mapping[number];

  for(int i=0; i < value.length(); i++){
      output.push_back(value[i]);
      keypad(str, index+1, output, ans, mapping);
      output.pop_back();
  }
  
}

vector<string> keypadUtil(string str, vector<string> &ans){
  if(str.length() == 0){
    cout<<"{}";
    return ans;
  }
  int index = 0;
  string output = "";
  string mapping[10] = 
 {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  keypad(str, index, output, ans, mapping);
  return ans;
}

int main(){
  string str = "23";
  vector<string> ans;

  keypadUtil(str, ans);

  for(int i=0; i<ans.size(); i++){
    cout<<" {"<<ans[i]<<"}";
  }
  
}