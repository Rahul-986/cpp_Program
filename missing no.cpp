#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{11,12,13,15,16};
	int i=0;
	int s=a.size();
for(auto k:a)
{
	if(k+1!=a[i+1]and s-1!=i){
		cout<<k+1;
		cout<<endl;
	}
	i++;
}
return 0;
}