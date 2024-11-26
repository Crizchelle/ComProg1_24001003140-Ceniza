#include <iostream>
#include <string>

using namespace std;


int main() {
    
    //declaring variable
    double num1, num2, result;
    int num;
    int choice;
    string ops; 
    
     cout << "Enter two numbers, then choose an operator\n";
     
     cout <<"Enter first number :";
     cin >> num1;
     
     cout <<"Enter second number :";
     cin >> num2;
     
     
   // using do while loop
   do {
       
       // operator options
       cout << "\nChoose an operator :\n";
       cout << "[+] for addition operator\n";
       cout << "[-] for subtract operator\n";
       cout << "[*] for multiplication\n";
       cout << "[/] for division\n";
       cout << "[ok] for ending calculator\n";
       cout << "[Enter your operator] :";
       cin >> ops; 
      
      
      if (ops == "+") {
          result = num1+num2;
         cout << num1 << " + " << num2 << " = " << result;
      } else if (ops == "-") {
         result =  num1-num2;
          cout << num1 << " - " << num2 << " = " << result; 
      } else if (ops == "*") {
         result = num1*num2;
          cout << num1 << " * " << num2 << " = " << result;
      } else if (ops == "/") {
         result = num1/num2;
          cout  << num1 << " / " << num2 << " = " << result; 
       } else if (ops == "ok") {
            break;  // for ending calculator "ok"
      
      } else {
          cout << "invalid input"; 
         
       
      }
   } while (choice !=4);
   cout <<"ok"; //to exit looping
    return 0;
}
 