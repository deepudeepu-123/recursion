class Solution {
public:
void a(int i,vector<int> ans, vector<int> nums,int n,vector<vector<int>> &ab)
{
    if(i>=n){
        ab.push_back(ans);
        return;

    }
    ans.push_back(nums[i]);
    a(i+1,ans,nums,n,ab);
    ans.pop_back();
     a(i+1,ans,nums,n,ab);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
       vector<vector<int>> ab;
        int n=nums.size();
         a(0,ans,nums,n,ab);
         sort(ab.begin(),ab.end());
        ab.erase(unique(ab.begin(), ab.end()), ab.end());
        return ab;
    }
};