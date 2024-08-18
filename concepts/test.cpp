#include <iostream>
using namespace std;
int main() {
// type cast - converting one datatype to another like int a = a; -- it will give ascii value of a character 


//   int n;
//  cout << "Enter any odd number";
//   cin >> n;
//   int sum = 0;
//   for(int i=1;i<=n;i+=2){
//     cout<< i <<endl;
//     sum +=i;
//   }
//     cout<<sum <<endl;


// int n;
// cout<<"enter the positive number for the factorial ";
// cin >> n;
// long factorial = 1.0;
// if(n<0){
//     cout<<"ERROR can't find factorial of negative number";
// }else{
//     for (int i = 1; i <= n; i++)
//     {
//         cout<< i <<"*";
//         factorial *= i;
//     }
//     cout<<"Factorial of " << n <<" is = " <<factorial;
// }


   int n;
   cout<< "enter the number to check it is prime or not ";
   cin >>n;
   bool is_prime = true;
   if( n==0 || n==1){
     is_prime = false;
   }
   for (int  i = 2; i < n; i++)
   {
       if (n%i == 0)
       {
        is_prime = false;
       } 
   }

   if (is_prime == true)
   {
     cout<<"it's a prime number";
   }else{
    cout<<"it's not a prime number";
   }
   
   
  return 0;
}