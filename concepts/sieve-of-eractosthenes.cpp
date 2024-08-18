#include <iostream>
#include <vector>
using namespace std;

//  ----------------------------           Sieve of Eractosthenes           ------------------------------

// int countPrimes(int n) {
//        vector<bool> isPrime(n+1,true);
//        int count = 0;
//        for(int i = 2; i < n; i++){
//              if(isPrime[i]){
//                 count++;
//                 for(int j = 2 * i; j < n; j = j+i){
//                     isPrime[j] = false;
//                 }
//              }
//           }
//           return count;
//     }


// int main(){
//   int n = 40;
//   cout<<countPrimes(n);
// }



//-----------------------                   Question                  ----------------------------

//                                        Euclidean algorithm

// GCD - greatest common divisor

int gcd(int a, int b){

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a - b;
        }else
        {
            b = b - a;
        }   
    }
    
    return a;
}


int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    int ans = gcd(a,b);
    cout<<"Your GCD for the "<<a<<" and "<<b<<" is "<<ans;

}