#include <iostream>
using namespace std;

// int factorial(int n){
//      //Base case -- > kha stop krna hai recursion

//      if (n == 0)
//      {
//          return 1;
//      }
//      return n * factorial(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number for factorial"<<endl;
//     cin>>n;

//     int ans = factorial(n);
//     cout<<"Your factorial by recursion is "<<ans;
// }



// ----------------  2 ki power by recursive method   ------------------------

// int powerFun(int n){
//     if (n == 0)
//     {
//        return 1;
//     }

//     return 2 * powerFun(n-1);
    
// }


// int main(){
//     int n;
//     cout<<"Enter a number to find out the 2 ki power of that number "<<endl;
//     cin>>n;

//     int ans = powerFun(n);
//     cout<<"your ans is "<<ans;
// }



// ----------------- counting print by recursion -----------------------

// void counting(int n){
//     if (n == 0)
//     {
//         return ;
//     }

//     cout<<n<<" ";
//     counting(n-1);      // agr Ascending order mai print krvani hai to bs phle recursion function call maro then print krvao (mtlv line no.57 and 58 upper niche ho jaengi)
    
// }


// int main(){
//     int n;
//     cout<<"Enter the value from which you want to print "<<endl;
//     cin>>n;
//     counting(n);
// }



// -------------------------             Fibonacci series by recursion           ---------------------------------
//  ---------- Iski complexity bekar hogi ku kuki hum faltu ki call mare ja rhe hai hum loop lga ke isko asani se kr skte the 


int fibo(int n){
    if (n == 0)
    {
      return 0;
    }                              // base case survat ke 2 number in fibonacci series
    if (n == 1)
    {
        return 1;
    }
    
    return fibo(n-1) + fibo(n-2);             // merko pta hai agr merko kisi nth term ki value nikalni hai to vo nth term se 2 phle or 1 phle term ke sum se milke bna hoga
    
}


int main(){
    int n;                    // mene bola ki mujhe nth term in fibonacci series kya hai vo nikal ke de do 
    cout<<"Enter any value(nth term) that you want to know what is the value of that term in fibonacci series"<<endl;
    cin>>n;

    int ans  = fibo(n); 
    cout<<"Your nth term value in fibonacci series is "<<ans;
}