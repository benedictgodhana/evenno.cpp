#include <iostream>
using namespace std;
bool checkEvenOdd(int num);

int main(){
   int num;
   bool isEven;
   cout<<"Enter any number: ";
   //Storing the entered value in variable num
   cin>>num;
   //Calling the function that checks even odd
   isEven = checkEvenOdd(num); 
   if(isEven)   
      cout<<num<<" is an even number"; 
   else   
      cout<<num<<" is an odd number";
  
   return 0;
}

bool checkEvenOdd(int num){
   bool b;
   
   if (num % 2 == 0)
      b=true;
   else 
      b=false;

   return b;
}

