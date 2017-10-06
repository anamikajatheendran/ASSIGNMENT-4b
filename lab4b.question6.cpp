#include<iostream>
using namespace std;
void rev(int n) {
     int p;
     if (n/10==0) {
     cout<<n;  }
   else {
     cout<<n%10;
     rev(n/10);  }
}
int main()  {
int num;
cout<<"enter a number";
cin>>num;
  rev(num);
  return 0;
}








