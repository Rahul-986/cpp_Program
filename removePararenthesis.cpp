#include<iostream>
using namespace std;
string remove_p(string s)
{
	string res="";
	int j=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==41)
		{
			j--;
			
		}
		if(j!=0)
		{
			res=res+s[i];
			
		}
		if(s[i]==40)
		{
			j++;
		}
	}
	return res;
}

int main()
{
	string a="(()()())(())";
	string ans = remove_p(a);
	for(int i=0;i<ans.size();i++){
      cout<<ans[i];	
	}
	
}