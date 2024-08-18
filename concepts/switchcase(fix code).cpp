#include <iostream>
using namespace std;


   //   question 2 -->>> checking how much notes do need to make total money

   
int main() {
  int amount;
  cout << " Enter the total amount ";
  cin >> amount;
  int value;
  cout << "Enter the value of money 10,20,50 or 100 you want the total money in " << endl;
  cin >> value;
  switch (value)
  {
  case 100:
      cout << "You need " << amount / value << " notes of hundered " << endl;
      if (amount % 100 == 0)
      {
          cout << "No remaining amount";
      }
      else
      {
          cout << "Your remaining amount is = " << amount % 100;
          cout << "Enter the value to check your amount in 50,20 and 10 ";
          cin >> value;
          switch (value)
          {
          case 50:
              if ((amount % 100)<50)
              {
                  cout<<"The amount is smaller then 50";
                  break;
              } 
              cout << "You need 50's notes for remaining amount is =" << (amount % 100) / value << endl; 
              if ((amount % 100) % value == 0)
              {
                  cout << "No remaining amount ";
              }
              else
              {
                  cout << "Your remaining amount is = " << (amount % 100) % value;
                  cout << "Enter value to check your remaining amount in 20,10 " << endl;
                  int twenty, ten;
                  cin >> twenty >> ten; 
                  switch (twenty) 
                  {
                  case 20:
                      if (((amount % 100) % value) < twenty) 
                      {
                          cout << "remaining amount is smaller then 20";
                          break;
                      } 
                      cout << "you need 20's notes for remaining amount is = " << ((amount % 100) % value) / twenty << endl; 
                      if (((amount % 100) % value) % twenty == 0)
                      {
                          cout << "No remaining amount";
                      }
                      else
                      {
                          cout << "Your remaining amount is = " << ((amount % 100) % value) % twenty << endl; 
                          cout << "if you want to check your remaining amount in 10's notes enter 10 " << endl;
                          cin >> ten;
                          switch (ten)
                          {
                          case 10:
                              if (((amount % 100) % value) % twenty > ten)
                              {
                                  cout << "remaining amount is smaller then 10";
                                  break;
                              }
                              cout << "You need 10's notes for remaining amount is = " << (((amount % 100) % value) % twenty) / ten << endl;
                              cout << "your remaining amount is = " << (((amount % 100) % value) % twenty) % ten; 
                              break;
                          default:
                              cout << "Invalid Input Please Enter the valid input";
                              break;
                          }
                      }
                      break;
                  default:
                      cout << "Invalid Input Please Enter the valid input";
                      break;
                  }
              }
              break;
          case 20:
              cout << "You need 20's notes for remaining amount is = " << (amount % 100) / value << endl;
              break;
          case 10:
              cout << "You need 10's notes for remaining amount is = " << (amount % 100) / value;
              break;
          default:
              cout << "Invalid Input Please Enter the valid input";
              break;
          }
      }
      break;
  default:
      cout << "Invalid Input Please Enter the valid input";
      break;
  }
}