#include<iostream>
#include<vector>
using namespace std;

class sol
{
	public:
		int remDup(vector<int> &nums)
		{
			int i=0;
			for(auto e:nums)
			{
				if(i==0||i==1||nums[i-2]1=e)
				{
					nums[i]=e;
					i+=1;
				}
			}
			return i;
		}
};