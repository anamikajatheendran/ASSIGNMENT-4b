#include<iostream>
using namespace std;
int sum(int n)
{  int p;
   if (n==0)
      p=n;
   else
      p=n+sum(n-1);
   return p;
}
int main(){
int m,y;
cout<<"number of natural numbers to be added with zero=";
cin>>m;
y=sum(m);
cout<<"answer is="<<y;
  return 0;
}
