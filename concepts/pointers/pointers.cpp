#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout<< "value in num is "<<num<<endl;

    // --> '&'  this symbol is used to print the address of the variable 
    cout<<"Address of num is "<<&num<<endl;

    int *ptr = &num;
    cout<<"Pointer jo hold kra hai that mean num address agr vo print krvana hai to "<<ptr<<endl;
    cout<<"or agr pointer jis address ko point kr rha hai uski value print krvani hai to "<<*ptr<<endl;    // star means value

    double number = 4.2;
    double *p2 = &number;

    cout<<"double ka address "<<p2<<endl;
    cout<<"double ki value "<<*p2<<endl;
    
    // so size jo hai pointer ka humesa 8 hoga kuki vo store krta hai address that is 1 byte means 8 bit
    //  so size pointer ka datatype mai depend nhi krta 
    cout<<"size kya hoga pointer num wale ka "<<sizeof(ptr)<<endl;
    cout<<"size kya hoga pointer double wale ka "<<sizeof(p2)<<endl;


    int i = 10;
    int *poi = 0;                
    poi = &i;                           // so both way mai pointer ko initialize kr skte hai
    cout<<"phle null tha ab i ki value ko point kr rha hai "<<*poi<<endl;
    cout<<"phle null tha ab i ke address ko point kr rha hai "<<poi<<endl;

    (*poi)++;    // it will increment the value of i means it will be 11
    cout<<"i ki value incremented "<<i<<endl;




    //  copy a pointer

    int meranum = 7;
    int *pointer1 = &meranum;       // so pointer1 mai value ka address gya 

    int *pointer2 = pointer1;      // and idhr pointer2 mai pointer1 ke andr jo value thi mtlv meranum ka address vo gya
                                 // so now both pointers - pointer1 and pointer 2 are pointing toward the meranum
    // but agr mai pointer2 mai &pointer1 dalta to pointer2 mai pointer1 ka address ata na ki meranum ka address
    cout<<"Pointer1 and pointer2 will be same "<<*pointer1<<endl;
    cout<<"Pointer1 and pointer2 will be same "<<*pointer2<<endl;

    int **pointer3 = &pointer1;
    cout<<"pointer1 ka address is "<<pointer1<<endl;
    cout<<"pointer3 ki kya value hogi "<<*pointer3<<endl;      // agr mai idhr 1 star lga rha hu to ye mujhe pointer1 ka address de rha hai mtlv jo pointer3 mai store hai 
    cout<<"pointer3 ki kya value hogi "<<**pointer3<<endl;    // but agr mai 2 star lga rha hu to ye mujhe value de rha hai pointer1 mai jo address hai uski means pointer3 1 star will point address and 2 star points the value of that address   


  int hello = 5;
  int *loi = &hello;

  (*loi)++;    // so isme to ye value bda dega hello ki mtlv 5 se 6 ho jaegi value but 
  cout<<"upgraded value of hello"<<hello<<endl;

  // and loi ke andr jo hai vo hello ka address hai 
  cout<<"hello address in loi "<<loi<<endl;

  // but agr mai kch esa kru to
  loi = loi + 1;    // so iska mtlv jo phle address tha hello ka usme 1 increment ho jaega --- no no
  cout<<"isme hoga kya ki jo int hai vo 4 byte ka hota hai to "<<loi<<endl;   // so isme increment hoga 4 byte ka agle wale address mai jane ke liye 
  // agr koi or datatype ka hota jese double to 8 byte aage chle jata 


}