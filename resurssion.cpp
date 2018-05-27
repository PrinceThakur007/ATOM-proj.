#include "iostream"
using namespace std;

int fact(int num)
{
  while(num>0)
  {
  num=num*fact(num-1);

return num;}

}

int main()
{
  int n,factorial;
  cout<<"Enter the number you want to do factorial: ";
  cin>>n;
    factorial=fact(n);
    cout<<factorial;
    return 0;
}
