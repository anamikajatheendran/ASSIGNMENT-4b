#include<iostream>
using namespace std;
int fact(int n)
{  int p;
   if (n==0) {
    p=1; }
   else {
     p=n*fact(n-1); }
   return p;
}
int main(){
int n,a;
cout<<"enter a number";
cin>>n;
a=fact(n);
cout<<"factorial of number is="<<a;
  return 0;
}
