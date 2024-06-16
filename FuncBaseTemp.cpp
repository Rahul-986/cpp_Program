#include<iostream>
using namespace std;
template<class t>
t sum(t a,t b)
{
	return a+b;
	
}
int main()
{
	cout<<"sum"<<sum(5,6)<<endl;
	cout<<"float sum="<<sum(12.7,34.4);
	return 0;
}