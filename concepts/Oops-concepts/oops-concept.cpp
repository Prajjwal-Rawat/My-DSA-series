#include <iostream>
#include <string.h>
using namespace std;

// class Hero{
   
//    public:
//    Hero(){
//     cout<<"simple constructor called "<<endl;
//    }
//    int age;
//    int weight = 30;
//    char level;
//    Hero(int age, char level){
//      this -> age = age;
//      this -> level = level;
//    }

//    Hero(Hero & copi){                    // copy constructor
//      cout<<"copy constructor call"<<endl;
//      this -> age = copi.age;         
//    }
// };

// int main(){
//     Hero prajjwal(40, 'S');
//     cout<<"Age "<<prajjwal.age<<endl;
//     cout<<"level "<<prajjwal.level<<endl;

    
 
//     Hero rawat(prajjwal);             // copy constructor
//     cout<<"copy wala age "<<rawat.age<<endl;   // kuki mene iska khud ka constructor bna dia hai to isme orignal properties to hongi but unki jo mene value initialize kri hai prajjwal object mai vo nhi hongi garbage value hongi
//     // but agr mai iska khud ka constructor nhi bnata to default constructor original wale ki value bhi copy krta hai but ab mujhe agr value bhi same chaiye isme orignal ki trh 
//     // to mujhe iske constructor mai likhna pdega ki 
//     // this -> age = copi -> age
//     // this -> level = copi -> level 
//     cout<<"What if i change the age in copy will it change for the original too ?"<<endl;
//     rawat.age = 22;
//     cout<<"Rawat copy age is "<<rawat.age<<endl;
//     cout<<"prajjwal original age is "<<prajjwal.age<<endl;
    
// }



// ------------------------   shallow copy and deep copy     --------------------------------


// class Myhero{
//   public:
//   char *name = new char[100];           // name naam ka pointer initialize kia and  heap mai memory de di usko 
//   Myhero(){
//     cout<<"Original constructor called"<<endl <<endl;
//   }
  
//   int age;
//   char level;

//   void print(){
//     cout<< "[ Name : "<<this -> name <<",";
//     cout<< " Age : "<<this -> age <<",";
//     cout<< " Level : " <<this -> level <<"]" <<endl <<endl;
//   }

//   void setName(char name[]){
//     strcpy(this -> name, name);        // strcpy() function copies string (first parameter jha string copy krni hai , second parameter source jha se copy krni hai )
//   }

//   void setAge(int age){
//     this ->age = age;
//   }

//   void setLevel(char level){
//     this->level = level;
//   }
// };



// int main(){
//   Myhero  hero1;
//   char name[10] = "Deadpool";
//   hero1.setName(name);
//   hero1.setAge(23);
//   hero1.setLevel('S');
//   hero1.print();

//   // default copy constructor bnaege kuki shallow copy default constructor mai hoti hai 
//   Myhero *hero2 = & hero1;    // so basically ye hai shallow copy hum copy object ko pointer type mai bnate hai and orignal object ka refrence de dete hai so isse kya hoga ki dono mai address properties ka same hoga
//   hero2->print();             // see abhi to same aa rha hai

//   // let's say hum hero1 mai uska naam change krna chate hai 
  
//   hero1.name[0] = 'W';
//   // so mene hero1 ke liye change kia hai kya hero 2 ke liye bhi change ho jaega 

//   hero1.print();
//   hero2->print();          // yes ho gya so yhi hai shallow copy mean shallow copy mai idhr copy to bni but by reference copy bni mtlv dono mai address same hi hoga

//   hero1.setAge(20);        // so idhr mene hero1 ki age bhi change kr di dekhte hai hero2 ke liye bhi hoti hai ki nhi
//   hero1.setLevel('A');
//   hero1.print();               
//   hero2->print();            // so idhr age and level bhi change ho rhe hai kuki hume copy object by reference bnaya tha 

//   // but agr mai normal copy bnata to vo deep copy hoti but jese ki mene name ko pointer se initialize kia tha uss case mai address jo hai name ka dono copy and orignal object mai same rhta isliye hum kisi mai bhi change 
//   // krte to vo dono mai change hota but for other's like age and level unke liye change nhi hota
   

// } 



// -----------------------------         Distructor           ------------------------------


// class God{
//   public:
//   God(){
//     cout<<"God of constructor Brahma invoked(called) "<<endl;
//   }

//   int age = 500000;
//   char level = 'C';
  
//   ~God(){
//     cout<<"God of distructor Mhakal invoked(Called) "<<endl;
//   }

// };


// int main(){
//   God bholenath;

//   God * human = new God();              // we have to call distructor manually in the case of dynamic object 
//   delete human;              // this how distructor is called 

// }




// -------------------------        static member(attributr) and static function            ---------------------


class Game {
  
  public:
  static int timeOfGame;
  int age;

  static int time(){
    return timeOfGame;            // this static function can only access the static members like timeOfGame but can't access the age coz it is not a static member
  }

};

int Game :: timeOfGame = 50;         // we can initialize static member outside the class

int main(){
  cout<<"Access directly by the class no need of object creation "<< Game::timeOfGame<<endl;
  
  //  and we can also access static function directly by class name
  Game::timeOfGame = 10;     // we changed the value of timeofgame
  cout<<"function call "<<Game::time()<<endl;
}