#include <iostream>
using namespace std;


// --------------------------------                Polymorphism              -------------------------------
//  Ploymorphism means - > One entity have a multiple form 

// Types of polymorphism ---->     1. Compile Time Polymorphism 
//                        -->      2. Runtime polymorphism


// ------------------------- compile time polymorphism
//  type --------------- >   1. Function Overloading 
//                           2. Operator Overloading 

// -------------------------------    Function Overloading    -----------------------------------


// 1. function loading with different number of arguments

// class Addision{
//    public:

//    int add(int num1, int num2){
//      return num1 + num2;
//    }

//    int add(int num1, int num2, int num3){        // so basically hum isme same name ke funtion bna pa rhe hai kuki hum isme different number of arguments use kre hai 
//     return num1 + num2 + num3;
//    }                                            // but agr hum same number of arguments likhte to error deta
// };

// int main(){
//     Addision sum;
//     int num1 = 50;
//     int num2 = 10;
//     int num3 = 1;
//     cout<<"Sum of the num1 and num2 is "<<sum.add(num1, num2)<<endl;     // so idhr phla wala function call ho rha hai 
//     num1 = 12;
//     num2 = 3;
//     cout<<"Sum of the num1 and num2 and num3 is "<<sum.add(num1, num2, num3)<<endl;    // and idhr dusre wala function call ho rha hai 
//     // so we can use same name of function by giving them different number of arguments
// }




// 2. -------------- Function overloading with different type of arguments


// class Foo{
//    public:

//    int add(int num1 , int num2){
//      return num1 + num2;
//    }

//    int add(double num1, double num2){        // arguments different hai so we can make same name of funtion but we have to give different arguments datatype
//     return num1 + num2;
//    }


//    // different example

//    void student(string name){
//        cout<<"My name is "<<name<<endl;
//    }    

//    void student(int age){                  // so here mene same naam ke 2 function bnae hai but unme arguments different dia hai so it will not give error
//     cout<<"My age is "<<age<<endl;
//    }

// };

// int main(){
//     Foo obj;
//     int num1 = 14;
//     int num2 = 10;
//     cout<<"Sum of integer datatypes of funtion add is "<<obj.add(num1, num2)<<endl;       // so here mene int type ke bheje hai to vo smhj gya konsa function call hua hai 

//     double value1 = 12.1;
//     double value2 = 10.00;

//     cout<<"Sum of double datatypes of funtion add is "<<obj.add(value1, value2)<<endl;    // now isme mene double type ki bheji hai to usko pta hai merko konsa function call krna hai

//     // same for the student function

//     obj.student("Prajjwal");     // now isme pta hai usko ki string type aai hai to mujhe string type argument wala function call krna hai 
//     obj.student(32);       // and isme integer type value aai hai to mujhe student function call krna hai but integer arguments wala 
// }




// ------------------------------------   Default arguments       ------------------

// int add(int num1, int num2, int num3 = 0, int num4 = 0){   // so isme mene 2 default arguments de diye so mai different baar function call kr skta hu
//   return num1 + num2 + num3 + num4;
// }


// int main(){
//     cout<<" first funtion call "<<add(2,3)<<endl;
//     cout<<"second function call "<<add(5,3,1)<<endl;
//     cout<<"third function call "<<add(10,20,30,10)<<endl;
// }




// -----------------------------      Operator Overloading       --------------------------------

// class Hello{
//    public:
//     int a;
//     void operator + (Hello & obj){           // hello class ka ek obj type argument aaega
//       int value1 = this -> a;
//       int value2 = obj.a;
//       cout<<"Mai sum wale operator se subtraction krva rha hu "<<value2 - value1<<endl;
//     }
   

//    void operator () (){        // so basically ho kya rha hai idhr ki mai kisi bhi operator ko idhr initialize krke 
//     cout<<"hello bhai "<<endl;      // idhr jo chae vo likh ke uss operator se vo kaam krva skta hu 
//    }

//    void operator * (Hello & obj){
//       cout<<this->a + obj.a<<endl;
//    }
// };


// int main(){
//     Hello obj1, obj2;
    
//     obj1.a = 4;
//     obj2.a = 10;

//     obj1 + obj2;        // so basically idhr ho kya rha jese hi mene '+' ye sign lgaya to vo function call gai upper jo mene operator overloading ki hai plus operator ke liye and jo function ke andr operation likhe hai vo perform honge
//                        // and function ke andr mene substraction krva rkha hai so isliye hum idhr plus kr rhe hai but ho minus rha hai 
//     obj1();          // idhr mai sirf obj likhunga and jonsa operator mene upper define kia hai vo likhunga 
//                      // so isme ho kya rha hai ki jese mai obj and vo operator likhta hu jisko mene overload kia hai to vo function call ho jati hai 

//     obj1 * obj2;  // so iss multiplication  operator ne mujhe addition de diya 
// }





// -------------------------------         Now Runtime Polymorphsim       ---------------------------
//  Type  ------------------ Method overriding (not overloading overriding) function ke operation ko change krna ----------------------



// some rules for method overriding 
// Rules : 1. The method of the parent class and the method of the child class must have the same name
// Rule :  2. The method of the parent class and the method of the child class must have the same argumnets(parameters)
// Rule :  3. It is possible through only inheritance -- means Runtime polymorphism depends upon Inheritence


class Human{
    public:

    void speak(){
        cout<<"I am a human i can speak "<<endl;
    }
};

class Dog : public Human{
    public:

    void speak(){
        cout<<"But i am not a human i can only bark"<<endl;       // so idhr kya hua method overriding ho gai -- means dog to speak nhi kr skta na  
    }                                                       // isliye usne function ki functionality change kr di 
};

int main(){
   Dog obj;

   obj.speak();          // so it will call dog class speak function ---- but agr mai method overriding nhi krta to ye speak print krta
}