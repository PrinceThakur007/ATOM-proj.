#include<iostream>
using namespace std;
void hello();
  void  hello()
  {
    cout<<"I am in the function and i love programming: ";
 }
int main()
{
  hello();
  return 0;
}
/*
#include <iostream>
using namespace std;
void func() {
   static int i=0; //static variable
   int j=0; //local variable
   i++;
   j++;
   cout<<"i=" << i<<" and j=" <<j<<endl;
}
int main()
{
 func();
 func();
 func();
} */
