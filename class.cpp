#include "iostream"
using namespace std;
int c;
 class hello
 {
 public:
   int a,b;
 hello()
   {
    a=b=c=0;
   }

   int  add(int &firstnum,int &secondnum)
   {
    c=firstnum+secondnum;
  //  cout<<"The sum of the two numbers are: "<<c;

   return c;
 }
  };
 int main()
 {
   int first,second;
   cout<<"Enter first number: ";
   cin>>first;
   cout<<"Enter second number: ";
   cin>>second;
   hello obj1;
   obj1.add(first,second);
   cout<<"The sum of two numbers are: "<<c;
   return 0;
 }
