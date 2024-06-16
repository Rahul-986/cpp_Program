#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
int main() 
{ 
  
 
vector<pair<int,pair<int,int>>>v; 
v.push_back({1,make_pair(50,60)}); 
for(int i=0;i<1;i++) 
{ 
 
cout<<v[i].first<<"iiii"<<v[i].second.first<<v[i].second.second;
}
}