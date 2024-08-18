#include <iostream>
#include <math.h>
using namespace std;



// now isme hum dekhenge kese ek number ki bits nikali jati hai 

//  phla tarika to ese hai ki 
// example kisi bhi number ka nikalna hai to   algo == 
// first we have to divide that number from 2 
// store reminder in ans
// repeat above 2 steps until n zero na ho jae n mtlv jo number tha
// then reverse the ans (jo humne reminder store krvaya tha usko reverse krdo)
                                 
                                       //   division           reminder
// example -- >  10 ka nikalna hai         10/2 = 5                0
                                        //  5/2 =2                 1
                                        //  2/2 = 1                0
                                        //  1/2 = 0                1
                // so jo ye reminder aye hai unko reverse krdo to bit value aa jaegi 10 ki --> 1010

                  // now humko reverse krne ke liye ek formula use krna pdega that is 
                  // ans = (bits * 10 ki power i) + ans
                  // so basically ho kya rha hia iss formule mai ki ek variable initialize kre hai hum ans naam ka jiski value survat mai 0 hai 
                  // then jb hum bits nikal le rhe hai isse n&1 se to 
           // for example = 10 ki bits nikali humne 10&1 se = so ye aaengi = 0101 now ye to bits nikal li humne now isko jb hum reverse krenge tbhi to asli bits aaengi 10 ki
           // so iss formule mai rkhenge ans = (0*10 ki power 0 ) + 0 = 0
                                    //   ans = (1*10 ki power 1 ) + 0 = 10
                                    //   ans = (0*10 ki power 2 ) + 10 = 10
                                    //   ans = (1*10 ki power 3 ) + 10 = 1010 so that's it bro
                    // and agr humko kisi number ko reverse krna hai like 1,2,3 inko reverse ma likhna hai 321 ese to bs iss formule mai bits ki jgh ye digit aaengi
                    // and agr humne in digits ko 1,2,3 ko sequence mai likhna hai to jese 123 to ye formula use hoga = ans = (ans * 10) + digit
int main(){
    // int n;
    // cout<<"Enter the number you want to check in binary ";
    // cin>>n;
    // int ans = 0;    // now isme hum jata bdi value ke liye check nhi kr skte like 1000000 because int has a limit so we have to use in here string 
    // int i = 0;
    // while (n!=0)
    // {
    //   int bits = n&1;        // now ye hume bit nikal ke de dega kisi bhi numbers ki 
    //   ans = (bits * pow(10 , i)) + ans; 
    //   n = n>>1;                  // shifting the bits of the n like 10 = 1010 -so it will shift every time it will give a bit
    //   i++;                       //      doing n&1                  1  = 0001   
         
    // }
    // cout<<ans;





    // now hume agr binary to decimal convert krna hai to like 110 -- kya hoga 
    // so iska logic kya hoga ki phle hum digit nikal lenge jo bhi n mai user dega n%10 se digit
    //                                            |
    //                                            \/
    //        now isme hum bits ke hisab se nhi nikal skte kuki jb user n ki value binary mai dega like 110 so computer sochega ye koi value hai ek sodus so ye 110 ka binary nikalega bda sa
    //   so isliye hum isme digit nikalenge
    // now jb n ki value nikal jaegi to hum condition lga denge if(n==1) so ans + 2 ki power
      


    int n;
    cout<<"Enter the binary value to check its decimal value ";
    cin>>n;
    int i = 0 , ans=0;

    while (n!=0)
    {
      int digit = n%10;
      if (digit == 1)
      {
        ans = ans + pow(2 , i);
      }
      n = n/10;
      i++; 
    }
    cout<<ans;
     
}


