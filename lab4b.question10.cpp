#include<iostream>
using namespace std;
int fib(int n) 
{    if (n==1)  {
     return 1;  }
    else if (n==2)  {
      return 1;   }
    else  {
     return fib(n-1)+fib(n-2);   }
}
int main()  {
int x,f;
cout<<"enter a positive integer x=";
cin>>x;
f=fib(x);
cout<<"xth term in Fibanocci sequence is="<<f;
  return 0;
}
