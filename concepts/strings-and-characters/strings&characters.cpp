#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;


// //   length of string

// int findlength(char name[]){
   
//    int count = 0;
//    for (int i = 0; name[i] != '\0'; i++)
//    {
//       count++;
//    }
//    return count;
// }


// // reverse the string

// void reverseStr(char name[], int length){
    
//     int i = 0;
//     int j = length - 1;

//     while (i <= j)
//     {
//         swap(name[i], name[j]);
//         i++;
//         j--;
//     }
// }


// int main(){
   
//    char name[20];
//    cout<<"Enter the name of yours but don't give any space only first name"<<endl;
//    cin>>name;
//    int length  = findlength(name);
//    cout<<length<<endl;
//    reverseStr(name,length);
//    cout<<name;

// }



// --------------------------------              Question 2               -----------------------------------



//  Check If The String Is A Palindrome 

// You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

// Note :

// String 'S' is NOT case sensitive.
// Example :

// Let S = “c1 O$d@eeD o1c”.
// If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.


// -----------------------------------                ANS             -----------------------------------------


// char toLowercase(char ch){
//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }



// bool checkPalindrome(string s)
// {
//      int n = s.size();
//      int i = 0;
//      int j = n-1;
    

//      while(i < j){
//          if(ispunct(s[i]) || isspace(s[i])){                       // so inko mai or chota kr ke likh skta tha 
//              i++;
//          }else if (ispunct(s[j]) || isspace(s[j])){
//              j--;
//          }else{
//          if(toLowercase(s[i]) == toLowercase(s[j])){
//            i++;
//            j--;
//         } else {
//            return false;
//         }
//       }
//      }
//      return true;
// }


// so short version of this checkPalindrome function is 



// bool checkPalindrome(string s){
//    int n = s.size();
//    int i = 0;
//    int j = n-1;

//    while (i < j)
//    {
//      while (i < j && !isalnum(s[i]))       // so isme isalnum hi check kr lera hai dono numeric bhi and characters bhi but it doesn't consider special characters
//      {
//        i++;
//      }
//      while(i < j && !isalnum(s[j])){
//       j--;
//      }

//      if (toLowercase(s[i]) != toLowercase(s[j]))
//      {
//         return false;
//      }else{
//          i++;
//          j--;
//      }
//    }
//    return true;
// }

//  ------ we can also remove the non-alphanumeric by this function --------


// string removeNonalphnumeric(string s){
//   string result = "";
//   for(char ch : s){
//     if(isalnum(ch)){
//       result += ch;
//     }
//   }
//   return result;
// }


// int main(){
//    string s = "codingninjassajNiNgNidoc@";
//    cout<<checkPalindrome(s)<<endl;
//    if (checkPalindrome(s))
//    {
//       cout<<"yes it is palindrome string ";
//    }else
//    cout<<"No it is not a palindrome string ";
// }



// ----------------------------------------            Question 3            ----------------------------------------


// Ninja’s friend challenged him with a trick question. He gave him a string ‘S’ and asked him if it is possible to 
// make this string palindrome by deleting one character from the string. Can you help the ninja to solve this problem?

// You are given a string ‘S’ of size ‘N’.You have to determine whether it is possible to make the string palindrome by deleting at most one character.

// For Example
// If the string is ‘AZBCDCBA’, the answer will be YES as we can delete the character ‘Z’ and the remaining string is a palindrome. 


// ---------------------------------                  ANS                 ---------------------------------



// bool validPalindrome(int n, string &s)             // isme hum ek character hta ke dekh rhe hai ki vo palindrome bnega ki nhi
// {    
//      if(n <= 1){
//          return true;
//      }
//      int count = 0;
//      int i = 0;
//      int j = n-1;
//      while(i < j){
//          if(s[i] != s[j]){
//            count++;
//            if(count > 1){
//                return false;
//            }

//            if(s[i+1] == s[j] || i+1 < j){
//                i++;
//            }else if(s[i] == s[j-1] || i < j-1){
//                j--;
//            }else{
//                return false;
//            }
//          }else{
//              i++;
//              j--;
//          }
//      }
//      return true;
// }


// int main(){
//    string s = "AZBCDCBA";
//    int n = s.length();
//    cout<<validPalindrome(n , s)<<endl;
//    if (validPalindrome(n,s))
//    {
//       cout<<"yes it is valid palindrome string after removing one character ";
//    }else
//    cout<<"No it is not a valid palindrome string ";
// }



//  ----------------------------      Question 4          ------------------------------------



// REVERSE THE WORD IN THE STRING
// A word is defined as a sequence of non-space characters. The words in s(string) will be seprated by a single space

// ----------------------------------------           ANS           -------------------------------


// string reverseWords(string s, int n) {
//   int i = 0;
//   int j = 0;
//   while (j <= n) {
//     if (s[j] == ' ' || j == n) {
//       reverse(s.begin() + i, s.begin() + j);
//       i = j + 1;
//       j++;
//     } else {
//       j++;
//     }
//   }
//   return s;
// }

// int main() {
//   string str = "My name is prajjwal";
//   int n = str.length();
//   string s = reverseWords(str, n);
//   cout<<s;
// }



// ----------------------------          Question 5           -------------------------------------

// Maximum Occuring Character

// Given a string str of lowercase alphabets. The task is to find the maximum occurring character in
//  the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.


// ----------------------------------------      ANS          ------------------------------------------------


// char getMaxOccuringChar(string str){
//   int arr[26] = {0};           // a to z 26 alphabets hote hai so iss array ak index a,b,c--z ko drsa rha hai and jo array ke andr value hai vo sari zero hai abhi
//   for (int i = 0; i < str.length(); i++)
//   {
//      char ch = str[i];     // mene bola jo jo character ate jare hai unko ch mai store krte jao

//      int number  = 0;               // mene count ke liye ek number naam se variable initialize kr dia
//      number  = ch - 'a';            // now idhr jo bhi character aya hai string se usse mai a se minus kra rha hu taki merko uska index pta chl jae ki kis index mai hai vo
//      arr[number]++;                 // ch wala character taki mai usko increment kr sku phle zero tha ek baar occur hua to 1 ho jaega frse occur hoga to 2 ho jaega array value
//   }

//   int ans = 0; int maxi = 0;
//   for (int i = 0; i < 26; i++)
//   {
//      if (maxi < arr[i])       // now idhr mene check kia ki array mai kon max value hai 
//      {
//         ans = i;              // and idhr jo bhi max value hoga uska index mene ans mai store kraya hai kuki index hi alphabets drshata hai 
//         maxi = arr[i];
//      }
//   }
  
//   return ans + 'a';     // idhr vo index number ko character mai change krne ke liye index ko 'a' se plus kr dia
// }


// int main(){
//   string str = "Prajjwal";
//   cout<<getMaxOccuringChar(str);

// }



// ---------------------------------          QUESTION 6         ----------------------------------------

// You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

// example :   string = "Hello My name is "  output = "Hello@40My@40name@40is"


// ----------------------------             ANSWER             ------------------------------------------


// string replaceString(string &str){
//    for (int i = 0; i < str.length(); i++)     // and str.length loop ke andr isliye initialize ki hai kuki str ki length baar baar change hogi isliye
//    {
//       if (str[i] == ' ')
//       {
//          str.replace(i, 1, "@40");       // so mene idhr in built function use kia hai hum iski jgh ek temp string leke bhi kr skte the 
//          i += 2;                        // i ko isliye bdhaya hai taki ye @40 mai iteration brbad na kre wese hum chate to nhi bhi lgate to fr bhi chlta code
//       }
//    }
//    return str;
// }


// int main(){
//    string str = "hello my name is prajjwal rawat";
//    cout<<replaceString(str);
// }



//  --------------------------------           Question 7            -------------------------------------


// Remove All Occurrences of a Substring

// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.


// -----------------------------------          ANSWER          ------------------------------------------


// string removeOccurence(string &s, string part){
          
//       int pos = s.find(part);
//       while (pos != string::npos)
//       {
//           s.erase(pos, part.length());
//           pos =  s.find(part);
//       }
//    return s;     
// }

// int main(){
//    string s = "daabcbaabcbc";
//    string part = "abc";
//    cout<<removeOccurence(s,part);
// }



//    -------------------------------          Question 8              -----------------------------------------

//  Permutation in String

// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
// In other words, return true if one of s1's permutations is the substring of s2.

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").



// -------------------------------------------          Answer             ------------------------------------

// bool isEqual(int arr1[26], int arr2[26]){
//    for (int i = 0; i < 26; i++)
//    {
//       if (arr1[i] != arr2[i])
//       {
//          return false;
//       }
//    }
//    return true;
// }


//  bool checkInclusion(string s1, string s2) {
//         int arr1[26] = {0};
//         for(int i = 0; i < s1.length(); i++){
//             int index = s1[i] - 'a';
//             arr1[index]++;
//         }
//      // For window 1
//      int arr2[26] = {0};
//      int i = 0;
//      int window = s1.length();
//      while(i < window && i < s2.length()){
//         int index = s2[i] - 'a';
//         arr2[index]++;
//         i++;
//      }
//      //compare
//      if(isEqual(arr1,arr2)){
//         return true;
//      }
//      // for other windows
//        while(i < s2.length()){
//         // index of new position of i
//         int Newindex = s2[i] - 'a';
//         arr2[Newindex]++;

//         //remove previous window's first element count
//         char removechar = s2[i - window];
//         int removeIndex = removechar - 'a';
//         arr2[removeIndex]--;

//         i++;

//         if(isEqual(arr1,arr2)){
//         return true;
//         }
//       }
//       return false;
//  }


// int main() {
//   string s1 = "ab";
//   string s2 = "eidbaooo";
//   cout<<checkInclusion(s1,s2);
// }




// ------------------------------------         Question 9              ----------------------------------------

// Remove All Adjacent Duplicates In String

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

// Example 1:

// Input: s = "abbaca"
// Output: "ca"


// -----------------------------------        Answer         -------------------------------------------

//  My approach --  Runtime jada le rha hai // but space complexity is O(1)

// string removeDuplicates(string s) {
//    int i = 0;

//    while(i < s.length()){
//        if(s[i] == s[i+1]){
//            s.erase(i, 2);
//            i--;
//        }else{
//            i++;
//       }
//        if(i < 0){
//            i++;
//        }
//    }
//    return s; 
// }


// Other's approach 

// string removeDuplicates(string s) {
//    string temp = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//       char ch = s[i];
//       if (temp.empty())           // wese mai iss statement ko remove kr skta hu 
//       {
//          temp.push_back(ch);
//       }else if(ch == temp.back()){                // temp.back() -- back() function checks the last value that's why  
//          temp.pop_back();                         // push_back() it will push in last || pop_back it will remove last element 
//       }else{
//          temp.push_back(ch);
//       }

//     }
    
//    return temp;
// }

// int main(){
//    string s;
//    cout<<"Enter the string"<<endl;
//    cin>>s;
//    cout<<"After removal of adjacent duplicates"<<endl<<removeDuplicates(s);
// }



// ---------------------------              Question 10            -----------------------------------

// String Compression

// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.


// Example 1:

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".


// -----------------------------------------       Answer      ------------------------------------

int compress(vector<char> &chars){
     
     int i = 0;                // i = 0 jha se hum iterate krenge 
     int index = 0;            // index = 0 track rkhne ke liye ki hume update characters kr kha dalne hai 
     int n = chars.size();
     while (i < n)
     {
        int j = i+1;
        while (j < n && chars[i] == chars[j])   
        {
            j++;
        }
       //   iss loop se bhr tb niklenge ya to jb character hi khtm hi jae
      //   ya fr koi naya character encounter hua hoga jo match nhi krta 'i' se

        chars[index++] = chars[i];          // iss line mai humne phla character daal diya jo bhi aaega kuki vo to dalna hi hai chae count 1 ho ya 1 se jada

        int count = j-i;                   // idhr count nikal li 'i' jo tha vo phli vali position mai hi tha sirf j increment ho rha tha 
                                           // so 'j' ki position abhi new character wale mai hogi jo 'i' se match nhi krta 
        if (count > 1)
        {
           string str = to_string(count);          // now iss line mai humne count jo ki interger tha usko humne string mai convert kr liya 
           for (char ch : str)                     // and uss string ke hr ek charcter ko pkda or index mai daal dia
           {
              chars[index++] = ch;               // humne ye isliye kia kuki agr single digit ati jese 2 se 9 tk tb to thk tha but two digit aa jati to
           }                                     // character array mai to hum ek ek krke hi daal skte hai na isliye agr 10 aaega agr ab isme to phle 1 jaega then 0
         
        }

        i = j;                 // ab isme 'i' ko j mai rkh denge kuki j tha new wale character mai jo match nhi kr rha tha 
     }
     return index;
}



int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    
    int compressedLength = compress(chars);
    cout<<"compressed array length "<<compressedLength<<endl;
    
    cout << "Compressed array: ";
    for (int i = 0; i < compressedLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    
    return 0;
}