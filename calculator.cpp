#include <iostream>
using namespace std;
void add();
void sub();
void mul();
void div();
int main()
{
 cout<<"\n Hey,I am your personal calculator :-)";
 cout<<"\n\n Enter what type of calculation you want to: ";
 char ch;
 cin>>ch;
 switch (ch)
 {
   case '+': add();
          break;
   case '-': sub();
          break;
   case '*':  mul();
          break;
   case '/': div();
         break;
  default : cout<<"\n wrong operation inserted :-( ";
         break;
 }
return 0;
}
void add()
{
  int firstnum,secondnum,sum;
  cout<<"\n Enter first number ";
  cin>>firstnum;
  cout<<"\n Enter second number ";
  cin>>secondnum;
  sum=firstnum+secondnum;
  cout<<"\n The sum of two number is: "<<sum;
}
void sub()
{
  int firstnum,secondnum,sub;
    cout<<"\n Enter first number ";
    cin>>firstnum;
    cout<<"\n Enter second number ";
    cin>>secondnum;
    sub=firstnum-secondnum;
    cout<<"\n The subtraction of two number is: "<<sub;
  }
  void mul()
  {
    int firstnum,secondnum,mul;
      cout<<"\n Enter first number ";
      cin>>firstnum;
      cout<<"\n Enter second number ";
      cin>>secondnum;
      mul=firstnum*secondnum;
      cout<<"\n The product of two number is: "<<mul;
  }
  void div()
  {
    int firstnum,secondnum,di;
      cout<<"\n Enter first number ";
      cin>>firstnum;
      cout<<"\n Enter second number ";
      cin>>secondnum;
      di=firstnum/secondnum;
      cout<<"\n The divison of two number is: "<<di;
  }
