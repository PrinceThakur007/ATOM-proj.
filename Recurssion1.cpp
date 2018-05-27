#include <iostream>
using namespace std;
int fact(int n);
int main()
{
  int n;
  cout<<"\n Enter the number: ";
  cin>>n;
  int ft=fact(n);
  cout<<"\n The factorial of "<<n<<" is: "<<ft;
  return 0;
}

int fact(int n)
{
 if(n==1)
  {
    return n;
  }
  int s=n*fact(n-1);
  return s;
}
