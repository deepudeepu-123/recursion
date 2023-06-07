#include<bits/stdc++.h>
using namespace std;
void summation(int index,vector<int> &ans,vector<int> input,int n,int sum)
{
    if(index==n)
    {
        ans.push_back(sum);
        return;
    }
    summation(index+1,ans,input,n,sum+input[index]);
    summation(index+1,ans,input,n,sum);

}
int main()
{
    vector<int> input={2,3};
    vector<int> ans;
    int n=input.size();
    int index=0;
    int sum=0;
    summation(index,ans,input,n,sum);
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}