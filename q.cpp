#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n=nums.size();
        int itr=1;
        int length=0;
        int countElement =1;
        while(itr<n){
            if(nums[itr]==nums[itr-1]){
                if(countElement<2){
                    countElement++;
                    length++;
                    nums[length]=nums[itr];
                }  
            }
            else{
                countElement=1;
                length++;
                nums[length]=nums[itr];
            }
           itr++; 
        }
        return length+1;
    }
};
int main()
{
	Solution obj;
	obj.nums();
}