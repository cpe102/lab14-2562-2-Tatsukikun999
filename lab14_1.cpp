#include<iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int *z = x;
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<"\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<"\n";
	cout<<"\n";
	cout<<"&a="<<&a<<"\n"<<"&b="<<(void*)&b<<"\n"<<"&c="<<(void*)&c<<"\n"<<"&x="<<&x<<"\n"<<"&y="<<&y<<"\n"<<"&z="<<&z<<"\n";
	c = 'F';
	cout<<"\n";
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<"\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<"\n";
	*y = 'W';
	cout<<"\n";
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<"\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<"\n";
	cout<<"\n";
	*x = 6;
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<"\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<"\n";
	cout<<"\n";
	*z = 7;
	cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"c="<<c<<"\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<"\n";
	return 0;
}
