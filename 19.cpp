#include <iostream>
using namespace std ;
int main()
{
	char op;
	float a,b;
	cout<<"enter operator ::+,-,*,/ => ";
	cin>>op;
	cout <<"enter two operands =>";
	cin>>a>>b;
	switch(op)
	{
		case '+' :
			cout<<a<<"+"<<b<<" ="<<a+b;
			break ;
		case '-' :
			cout<<a<<"-"<<b<<" ="<<a-b;
			break ;
		case '*' :
			cout<<a<<"*"<<b<<" ="<<a*b;
			break ;
		case '/' :
			cout<<a<<"/"<<b<<" ="<<a/b;
			break ;
		default :
			cout<<"error ! operator is not correct ";
			break ;
	}
	return 0;
}
