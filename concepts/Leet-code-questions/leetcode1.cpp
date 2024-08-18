#include<iostream>
#include<cmath>
using namespace std;


// question 1  -->  Given a signed 32-bit integer x, return x with its digit reversed . if reversing x  causes the value to go outside the signed 
// 32-bit integer range[-2^31, 2^31, -1], then return 0.

// so basically isme hume jo bhi x ki value di hai usko reverse krna hai but agr reverse krne mai value integer limit se bhr jati hai to return 0 krvana hai

int main(){
   // int n;
   // cout<<"Enter the number to reverse ";
   // cin>>n;  
   // int ans = 0;   
   // while (n!=0)
   // {

   //    int digit = n%10;
   //    if ((ans>INT_MAX/10)|| (ans<INT_MIN/10))  // now isme humne int_max/10 isliye kia kuki hum ans mai 10 multiply bhi to kre hai na
   //    {                                         // so ans > int-max krte to ans to rhta int max se kaam pr hum ans mai 10 multiply bhi to kre hai to mtlv vo baad mai ja skta tha int max se uppr
   //       cout<<"0";                             // or 10 se multiply krna to jruri hai reverse krne ke liye isliye if condition mai int-max 10 se divide hua hai
   //       return 0;                              // and *10 > int-max = 10 udhr jake divide ho jaega 
   //    }
      
   //    ans = (ans*10)+digit;
   //    n = n/10;

   // }
   // if (ans<pow(2,31))
   // {
   //    cout<<ans;
   // }else cout<<"0";



   // question 2 --->  The compliment of an integer is the integer you get when you flip all the 0's and 1's and all the 1's to 0's in its 
   //                   binary representation
   // for example -->  the integer 5 is 101 in binary and its compliment is 010 which is the integer 2.


   //  int n;
   //  cout<<"Enter the Number to check its complement number ";
   //  cin>>n;
   //  int temp = n;    // humne temp value li hai n ki mask bnane ke liye hum kuki orginal n ko shift nhi kr skte
   //  int mask = 0;

   //  if (n == 0)
   //  {
   //    cout<<"1";   // 0 ka compliment 1 hota haiand isko alg se isliye likh rhe hai kuki agr n ki value 0 hogi to vo loop mai jaega hi nhi
   //    return 0;
   //  }
    
   //   while (temp!=0)
   //   {
   //       mask = (mask<<1) | 1;   // now isme mai right shift isliye nhi maar skta kuki jo OR krke 1 aaega uski ko right shift maar diya to frse sb 0 hi ho jaega na bro
   //       // n = n>>1;
   //       temp = temp>>1;         // isme mene ye glti kri ki mene original n ki value mtlv bits ko hi shift krdiya isliye niche jb mai negation 
   //   }                         // kr rha hu n ka to vo bs 0000 valo ko 1111 bna de rha hai mtlv jo original bits thi like 5 = 00000101 to mene 101
   //   int ans = (~n) & mask;    // to shift kr di na bachi bs 0000 isliye isme gad bad ho rhi hai so isko solve krne ke liye hum ek tem value lenge n ki
   //    cout<<ans;


   // question no. 3 ---->    given an integer n, return true if it is a power of two(2) otherwise return false

   // so basically isme hume dekhna hai ki jo n hai vo 2 ki power mai ata hai to true nhi ata to false

   // so isko solve kese krenge isme hum phle integer ke max value tk sari 2 ki power nikal lenge then unse check kr lenge ki n kisi 2 ke power mai ata hai ki nhi

   int n;
   cout<<"Enter the number to check it comes under power of 2 or not ";
   cin>>n;
   bool itscome = false;
   for (int i = 0; i <= 30; i++)      // so int ki max value 2 ki power 31 hoti hai but 2^31 = -1 hoti hai isliye hum loop 30 tk chlaenge 
   {
          int power = pow(2,i);            // so isme ek or tarika ho skta tha agr hum jo given number hai uski set bit nikal le agr set bit mai 1
      if (n == power)                      // hai like puri bits mai 1 baar hi 1 hai to vo 2 ki power mai hai example 1000 = 8 , 0100 =4,10000 =16
      {                                    // so ye bhi ek tarika hai
        itscome = true;
      } 
   }
   if (itscome)
   {
      cout<<"true";
   }else cout<<"flase";
   

          
}