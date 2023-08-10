#include <iostream>
using namespace std;
int sumof(int n) {
  int sum=0;
  if(n/10==0)
  {
    return n%10;
  }
  return n+sumof(n/10);
}
int main() {
  int num=10;
  cout<<sumof(num)<<endl;
  return 0;
}
