#include<iostream>
using namespace std;
int sod(int n)   {
int p;
   if (n/10!=0)  {
     p=n%10;
     return p+sod(n/10); }
   else { 
    return n;  }
}
int main()
{int num;
cout<<"enter a number";
cin>>num;
cout<<"sum of the digits of the number="<<sod(num);
  return 0;
}
