#include "iostream"
using namespace std;
class hello
{
public:
  void flip(int a, int b )
  {
    int x,y,z;

    x=a;
    y=b;
    z=x;
    x=y;
    y=z;
    cout<<"The value is: "<<x<<" "<<y;

  }
  void flip(float a, float b )
  {
    float x,y,z;
    x=a;
    y=b;
    z=x;
    x=y;
    y=z;
    cout<<"The value is: "<<x<<" "<<y;

  }
};
int main()
{

int a,b;
  cout<<"\n Enter the value of A and B: ";
  cin>>a>>b;
  hello obj1;
 obj1.flip(a,b);
  return 0;
}
