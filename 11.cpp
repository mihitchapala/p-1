#include <iostream>
using namespace std ;
int main()
{
	char c;
	bool islowercasevowel,isuppercasevowel;
	cout<<"eneter an alphabet :: ";
	cin>>c;
	islowercasevowel=(c=='a'||c=='e' ||c=='i' ||c=='o'||c=='u');
	isuppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if (!isalpha(c))
	cout<<"error !!! non-alphabetic character .";
	else if (islowercasevowel || isuppercasevowel)
	cout<<c<<"is a vowel.";
	else 
	cout<<c<<"is a consonant.";
	return 0;
}
