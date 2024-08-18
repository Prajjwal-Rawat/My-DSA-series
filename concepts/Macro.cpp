#include <iostream>
using namespace std;

// //                     Macro -> A piece of code that is replaced by its value during the preprocessing stage of compilation


// #define PI 3.14                  // That's how a macro is defined       // It doesn't take any storage (memory)
//                         // we can simply change directly from here if we want to change's in code
//                         // it will be not changeable inside the cod

// // area of rectangle 

// #define AREA(l,b) (l * b)          //so jha bhi esa parameter de rkha hoga AREA(l,b) to uski jgh ye replace ho jaega (l * b)

// //                      chain - macros

// #define INSTAGRAM FOLLOWERS            // that is chain macros --> jisme phle parent macro expand hoga jisme followers hai to vo child mai dekhega 
// #define FOLLOWERS 138                 // ki iss naam ka koi macro hai agr hai to fr vo usko expand krega 

// int main(){
//     int r = 5;
//     double area = PI * r * r;
//     cout<<"Area of the circle is "<<area<<endl;


//     int l1 = 5;
//     int l2 = 10;

//     int recArea = AREA(l1,l2);           // now idhr l1 and l2 parameter ki trh gae hai 

//     cout<<"area of rectangle is "<<recArea<<endl;

//   cout<<"I have "<<INSTAGRAM<<" followers in instagram "<<endl;
// }



//         ------------              Types of macros             --------------------

//  1  -- >                 Multi-Line macro

// so multi - line - macro ko define krne ke liye hume back-slash ka use krna pdta hai multiple line likhne ke liye macro mai  


#define ELE 1, \
2, \
3

int main(){
     int arr[] = { ELE };

     cout<<"Elements of array is "<<endl;

     for (int i = 0; i < 3; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}

