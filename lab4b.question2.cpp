#include<iostream>
using namespace std;
void print(int y,int n)
{  if (y==n){
    cout<<y;
}
    else {
    cout<<y<<" ";
    print(y+1,n);
}
}
int main(){
int n;
cout<<"enter a number";
cin>>n;
print(1,n);
  return 0;
}
















