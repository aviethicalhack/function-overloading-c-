#include <iostream>
using namespace std;
class A
{ public:
    void cube(int a)
  {
    cout<<a*a*a;
  }
    void cube(float b)
  {
    cout<<endl<<b*b*b;
  }
};
int main()
{
  A obj;
  obj.cube(5);
  obj.cube(2.5f) ; 
}
