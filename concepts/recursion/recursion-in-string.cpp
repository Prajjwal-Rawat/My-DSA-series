#include <iostream>
#include <algorithm>
using namespace std;


// ---------------------------          Reverse the string by using recursion          -------------------------


// void reverseStr(string &str, int start, int end){     // as mene pass by reference kia hai to mai string ki jgh void function use kr skta hu kuki
//                                                         //hume kch return nhi krna directly main str mai changes honge
//      if (start >= end)
//      {
//         return ;
//      }

//      swap(str[start], str[end]);

//      reverseStr(str, start + 1, end - 1);
     
// }

// int main(){
//   string str = "Praijwali";
//   int length  = str.length();

//  reverseStr(str, 0, length-1);
//  cout<<"Reverse string is "<<str;                 // kuki humne referece variable lia hai isliye str mai change hua hai sidha 
// }



//  ------------------------                check if string is palindrom or not                -------------------------
                                                     //   |
                                                     //   |
                                                     //  \|/

                                     // ye normal loop se jo krte the

// bool checkPalindrom(string str){
//     int length = str.length();
//     for (int i = 0; i < length/2; i++)
//     {    
        
//         if (str[i] != str[length - i - 1])
//         {
//             return false;
//         }
        
//     }
    
//     return true;

// }


// int main(){
//     string str = "abbccbba";
//     bool ispalindrome = checkPalindrom(str);
//     if (ispalindrome)
//     {
//        cout<<"yes this string is palindrome "<<endl;
//     }else{
//         cout<<"No this string is not palindrome "<<endl;
//     }
 
// }


// ---------------------------------             Same question check palindrome by recursion          ----------------------------------



// ------------------------------------         Answer by recursion           ---------------------------------

// bool checkPalindrom(string str, int i, int length){
        
//         if (i > length/2)
//         {
//             return true;
//         }
//         if (str[i] != str[length - i - 1])
//         {
//              return false;
//         }
//         i++;

//         return checkPalindrom(str, i, length);
        
// }


// int main(){
//     string str = "abbccbba";
//     int length = str.length();
//     bool ispalindrome = checkPalindrom(str, 0, length);                // 0 mtlv first index of the string because we want to compare half string by other half string
//     if (ispalindrome)
//     {
//        cout<<"yes this string is palindrome "<<endl;
//     }else{
//         cout<<"No this string is not palindrome "<<endl;
//     }
 
// }




// ---------------------------              find the power by recursion              -------------------------------

//  so we have given a and b;     a is the digit and b is the power of that digit
// example -->>        a = 3 and b = 5   so 3 ki power 5 


int power(int a, int b){

    if (b == 0)                             // base case 
    {
        return 1;
    }
    if (b == 1)                        // agr power 1 ho gai mtlv a^1  = a
    {
        return a;
    }

    int ans = power(a, b/2);            // recursive call mari hai b/2 ke liye taki vo power kaam hoti jae or 0 ya 1 mai aajae then base case will handle

    if (b&1)
    {
        return a * ans * ans;                  // odd hai to 
    }else{
        return ans * ans;
    }
}

int main(){
    int a, b;
    cout<<"Enter the digit "<<endl;
    cin>>a;
    cout<<"Enter the power of that digit "<<endl;
    cin>>b;

    int ans = power(a,b);
    cout<<ans;
    
}