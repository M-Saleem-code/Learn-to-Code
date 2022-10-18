#include <iostream>

using namespace std;

int main()
{
  // factorial=1
  int n,f=1;
  cout <<"Enter any positive number "<<endl;
  cin >>n;
  // input any positive number

  for (int i=1;i<=n;i++){ 
      factorial*=i;
    //1*1=1
  }
  cout <<n<< " factorial ="<<factorial<<endl;
  //first time loop run print 1 loop execute that time tha equal to n

    return 0;
}
