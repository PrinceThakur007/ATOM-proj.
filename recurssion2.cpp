#include "iostream"
using namespace std;
int series(int n);
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  int ft=series(num);
  cout<<"The answer is: "<<ft;
  return 0;
}
int series(int n)
{
  int s;
  if(n==1)
  {
    return n;
  }
  s=s+series(n-1);
  return s;
}
