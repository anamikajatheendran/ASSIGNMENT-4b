#include<iostream>
using namespace std;
void print(int y,int n)
{  if (y==n){
      cout<<y;
}
    else {
      cout<<y<<" ";
      print(y+2,n);
}
}
int main(){ 
int y,n;
cout<<"enter the starting number";
cin>>y;
cout<<"enter the ending number";
cin>>n;
print(y,n);
  return 0;
}
