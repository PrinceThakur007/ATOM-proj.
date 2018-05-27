#include "iostream"
using namespace std;
int main()
{
  int size,array[20];
  cout<<"\n Enter the length of an array: ";
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>array[i];
  }
  cout<<"\n The enter array is: \n ";
  for(int i=0;i<size;i++)
  {
    cout<<" "<<array[i]<<endl;
  }
  return 0;
}
