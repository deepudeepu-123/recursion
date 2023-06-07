class Solution {
public:
void findCombination(int index,int target,vector<int>& arr, vector<vector<int>>& ans, vector<int>& db)
{
if(index==arr.size())
{
    if(target==0)
    ans.push_back(db);
    return;
}
if(arr[index]<=target)
{
    db.push_back(arr[index]);
    findCombination(index,target-arr[index],arr,ans,db);
    db.pop_back();
}
findCombination(index+1,target,arr,ans,db);

}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> db;
        findCombination(0,target,candidates,ans,db);
        return ans;
    }
};