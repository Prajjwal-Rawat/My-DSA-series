#include<iostream>
using namespace std;

// bool isEven (int a){
//     if (a&1)
//     {
//         return false; 
//     }
//     return true;
    
// }



// int Factorial(int fac){
//     int factorial = 1;
//    for (int i = 1; i <= fac; i++)
//    {
//       factorial *= i;
//    }
//    return factorial;
// }

// int nCr(int n, int r){
//    if (n == 0)
//    {
//       return 0;
//    }else if (r==0)
//    {
//       return 1;
//    }
   
   
    
//    int nfactorial =  Factorial(n);
//    int rfactorial = Factorial(r);
//    return nfactorial/(rfactorial*(Factorial(n-r)));

// }

bool isPrime(int num){
     int isprime = true;
    for (int i = 2; i < num; i++)
    {
      if (num%i == 0)
      {
         isprime = false;
      }
      
    }
    return isprime;
}



int main(){
// int a;
// cout<<"Enter the number to check if it is Even or not ";
// cin>>a;
// bool Even = isEven(a);
//     if (Even)
//     {
//         cout<<"Even";
//     }else{
//         cout<<"not Even";
//     }


//                                       n      
// factorial nikalne ke liye ek function  C     =  n! / r! * (n-r)! 
//                                          r      


// int n,r;
// cout<<"Enter the value of n "<<endl;
// cin>>n;
// cout<<"Enter the value of r "<<endl;
// cin>>r;

// cout<<"ncr Factorial is = "<<nCr(n,r);



// prime nikalna functions se

int n;
cout<<"Enter the number to check if it is prime or not ";
cin>>n;

bool prime =  isPrime(n);
if (prime)
{
   cout<<"its a prime number";
}else cout<<"Its not a prime number";

    
}