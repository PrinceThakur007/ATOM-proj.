#include <iostream>
using namespace std;
void add();
void sub();
void mul();
void div();
void enter();
int main()

{int n;
  cout<<"Enter the number you want to do calculation: ";
cin>>n;
  for(int i=0;i<n;i++)
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
}
return 0;

}
void enter(int &firstnum,int &secondnum)
{
  cout<<"\n Enter first number ";
  cin>>firstnum;
  cout<<"\n Enter second number ";
  cin>>secondnum;
}
void add()
{
  int sum,firstnum, secondnum;
  enter( firstnum, secondnum);
  sum=firstnum+secondnum;
  cout<<"\n The sum of two number is: "<<sum;
}
void sub()
{
  int sub,firstnum, secondnum;
    enter( firstnum,secondnum);
    sub=firstnum-secondnum;
    cout<<"\n The subtraction of two number is: "<<sub;
  }
  void mul()
  {
    int mul,firstnum, secondnum;
        enter( firstnum, secondnum);
      mul=firstnum*secondnum;
      cout<<"\n The product of two number is: "<<mul;
  }
  void div()
  {
    int di,firstnum, secondnum;
        enter(firstnum,secondnum);
      di=firstnum/secondnum;
      cout<<"\n The divison of two number is: "<<di;
  }
