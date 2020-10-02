#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  int *p;
  p=&a; //accesing address of a to pointer p
  cin>>a;// assume a=10
  cout<<a;// this will give you a value of a i.e '10'.
  cout<<*p<<endl; // this will also give you a value of a i.e '10'.
  cout<<p<<endl; // compiler will give you address of a.
return 0;
}
