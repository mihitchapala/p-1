#include <iostream>
using namespace std ;
int main()
{
	int a,b,temp;
	cout<<"enter the number 1 :";
	cin>>a;
	cout<<"enter the number 2 :";
	cin>>b;
	cout<<"before swapping."<<endl;
	cout<<"a= "<<a<<endl ;
	cout<<"b= "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after  swapping."<<endl;
	cout<<"a= "<<a <<endl;
	cout<<"b= "<<b<<endl;
	return 0;
}
