#include <iostream>
#include <string.h>
using namespace std;

// ----------------------------         4-Pillars of oops            -------------------------

// 1 ->  Encapsulation : It just wrap data members and functions ---- basically hide the information hide data 
// 2 ->  Inheritence -->  Inherit the behavious data types from the parent 
// 3 ->  Polymorphism
// 4 -> Abstraction

// -----------------------------          Encapsulation            - ------------------------

// class student{
//    private:
//    int Student_id;
//    int Student_rollNo;             // so private mai chize hai vo encapsulation hai mtlv humne info ko wrap kr liya private class mai so that info
//    public:                         // koi or access na kr pae
//    int age;
//    string name;
// };



// ------------------------------          Inheritance             -----------------------------------

// class Humans{
//    public:
//    int height;
//    int weight;
//    int age;
   


// };

// class Male: public Humans{             // so ye ho gai inheritence humne male class mai human class ki properties inherit kr li 
//    public:
//    string color;
//    string body;
//    string testo;
//    void print(){
//     cout<<"[ Age : "<<this->age <<", ";
//     cout<<"Height : "<<this->height <<", ";
//     cout<<"Body : "<<this ->body <<", ";
//     cout<<"Testo : "<<this->testo <<"]"<<endl;
//    }
// };

// // so now we can access both properties by male object

// int main(){
//     Male prajjwal;
//     prajjwal.age = 23;
//     prajjwal.height = 6;
//     prajjwal.body = "Strong";
//     prajjwal.testo = "High";
//     prajjwal.print();          // so idhr kya hua ki mene male class ki properties to acces kri hi but human class ki bhi kr li by inheritence
// }




// -----------------------     protected Inheritence          ---------------------


// class student {
//     private:
//     int roll_no;                          // so ye private class hum inherit nhi kr skte ye private attributes sirf isi class mai use honge or khi nhi
//     int Id;

//     protected:
//     string student_Name;                    // but in this protected attribute it is private only can be used inside the class but in this protected 
//     int height;                         // case we can access this attributes by the child class we can inheritate these attributes in child class
//     int age;

// };

// class Student1: public student{

//     //  int getRollno(){
//     //     return this -> roll_no;               // so it is giving error coz roll no is private in parant class
//     //  }

//     public:
//     string getName(){
//         return this -> student_Name;                // now see here it is not giving error coz student-name is protected in parent class which we can 
//     }                                               // access to child class

//     int getHeight(){
//         return this -> height;
//     }

//     int getAge(){
//         return this -> age;
//     }

//     void setName(string name){
//        this -> student_Name = name;
//     }

//     void setHeight(int height){
//        this -> height = height;
//     }

//     void setAge(int age){
//         this -> age = age;
//     }
    
// };


// int main(){
//     Student1 raman;
//     string name = "Raman";             // so here we accessed the protected attributes
//     raman.setName(name);
//     raman.setHeight(5);
//     raman.setAge(24);

//     // printing protected attributes by accessing child class then accessed by getter setter

//     cout<< "[ Student1 Name :" << raman.getName()<<", ";
//     cout<<"Student1 Age : " << raman.getAge()<<", ";
//     cout<<"Student1 height : " << raman.getHeight()<<" ]";

// }





// -------------------------------------        Types of inheritence            ----------------------------------

// 1 ------> Single 
// 2 -------> Multi - Level
// 3 ---------> Multiple
// 4 -----------> Hybrid
// 5 -------------> Hirearchical 


// -----------------------------       Multi - level - inheritence      ------------------------


// class Animal {
//    public:
//    bool nose;
//    bool legs;
//    bool eyes;
// };

// class Dog : public Animal{
//    public:
//    int legs;
//    int smell;
//    bool cute;
// };

// class GermanShefard : public Dog{             //.... so ye ho gai multi - level inheritence 
//    public:
//    string nature = "Agressive";                   

// };



// ------------------------------          Multiple Inheritence           ------------------------
// ----------- so insme ek class kisi 2 ya 2 se jada class ko inherit kr skti hai 



// class Animal{
//    public:

//    void bark(){
//       cout<<"Animal Barking "<<endl;
//    }
// };

// class Human{
//    public:

//    void speak(){
//       cout<<"Human Speaking"<<endl;
//    }
// };


// class Alliens: public Animal, public Human{         // so ye ho gai multiple inheritence isme Allien class ne 2 class ki properties inherit ki hai 
//    public:
   
//    void grawl(){
//       cout<<"Alliens grawling"<<endl;
//    }
// };


// int main(){
//    Alliens jadu;

//    jadu.bark();
//    jadu.speak();
//    jadu.grawl();

// }



// -----------------------------------       Hierarchical inheritence       --------------------------------

//  ---------------------- IN this only one parent class but multiple child class (multiple child class will inherit one parent class)



// class Employee{
//    public:
//    string Employee_name;
//    int Employee_id;
//    int Employee_income;

// };

// class Worker1 : public Employee{

// };

// class Worker2 : public Employee{                    // yr ho gai hierarchical inheritence 
 
// };                      

// //  so ye hierarchical inheritance hai to hum worker class bhi inherit kr skte hai so let's say ki worker1 ki profile like(name, income same hai)
// //  worker 3 and worker 4 se to hum worker1 ko inherit kr skte hai worker 3 and 4 mai 

// class Worker3 : public Worker1{

// };


// int main(){
//    Worker1 sujit;
//    sujit.Employee_name = "Sujit Lalu";
//    sujit.Employee_income = 12800;
// }




// ---------------------------------            Hybrid Inheritence           ------------------------
// 1 se jada type ki inheritence use ho rhi ho to usse hybrid kh dete hai 


// class A{
//     public:
//     void callA(){
//       cout<<"Class A is called "<<endl;
//     }
// };

// class D{
//    public:

//    void callD(){
//       cout<<"Class D is called "<<endl;
//    }
// };


// class B : public A{

// };

// class C : public A, public D{                       // so this is hybrid inheritence isme hierarchical and multiple inheritence use ho rha hai 

// };






// ---------------------------------         Inheritence Ambiguity          -------------------------------------


class A{
   public:

   void Ambiguity(){
    cout<<"Class A ka function call hua hai "<<endl;
   }

};

class B{
   public:

   void Ambiguity(){
    cout<<"Class B ka function call hua hai "<<endl;
   }

};

class C : public A, public B{
   
};


int main(){

    C obj1;

    // obj1.Ambiguity();               // so it will give error coz there is 2 functions of same name it doesn't know whom to call
    // so to resolve this ambiguity -- we will use scope resolution opertator

    obj1.A::Ambiguity();          // now it will call class A function 
    obj1.B::Ambiguity();          // and it will call Class B function
}