#include <iostream>
using namespace std;

// ---------------------------                Question 1                 -----------------------------

// -------------------   Count Ways To Reach The N-th Stairs         ----------------


// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.

// Each time, you can climb either one step or two steps.
// You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.


// -----------------------------               Answer                -----------------------------


// int distinctWays(int n){
//     if (n < 0)
//     {
//        return 0;
//     }
//     if (n == 0)
//     {
//         return 1;
//     }
    
//    int ans =  distinctWays(n-1) + distinctWays(n-2);
//    return ans;
// }



// int main(){
//     int n;
//     cout<<"Enter the stair number "<<endl;
//     cin>>n;
//     int ans = distinctWays(n);
//     cout<<"Distinct ways to climb the "<<n<<" is "<<ans;

// }




// ------------------------------            Question 2             ---------------------------------------

//                                    say digits
//  koi digit di hogi jese 412 hume print krvana hai usko four one two ese


void sayDigit(int n, string arr[]){
    if (n == 0)
    {
        return ;
    }

    int digit = n % 10;
    n = n/10;

    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
    
}

int main(){
    int n;
    cout<<"Enter any digits "<<endl;
    cin>>n;

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigit(n, arr);
}