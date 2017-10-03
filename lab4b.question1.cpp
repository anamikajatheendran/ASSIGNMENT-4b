#include<iostream>
using namespace std;
int power(int x,int n)
{  int p;
	if (n==0)
	p=1;
	else
	  p=x*power(x,n-1);
	return p;
}
int main(){
int x,y,z;
cout<<"enter the base";
cin>>x;
cout<<"enter the power";
cin>>y;
z=power(x,y);
cout<<"answer is="<<z;
return 0;
}
