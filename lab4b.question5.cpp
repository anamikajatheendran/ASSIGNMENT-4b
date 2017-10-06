#include<iostream>
using namespace std;
int sum(int y,int n)
{  int s;
    if (y==n){
     s=n;}
      else {
        s=n+sum(y,n-2); }
    return s;
}
int main(){
int x,y,z;
cout<<"enter starting number";
cin>>x;
cout<<"enter ending number ";
cin>>y;
z=sum(x,y);
cout<<"sum is "<<z;
}
