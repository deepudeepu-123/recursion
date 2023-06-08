#include <bits/stdc++.h>
using namespace std;
void combinationSum(int index, int n, int target, vector<int> v, vector<vector<int>> &ans, vector<int> temp)
{

    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }

    for (int i = index; i < n; i++)
    {
        if (i > index && v[i] == v[i - 1])
            continue;
        if (v[i] > target)
            break;
        temp.push_back(v[i]);
        combinationSum(i + 1, n, target - v[i], v, ans, temp);
        // for each index,check the combination upto size of the given vector
        temp.pop_back();
    }
}
int main()
{
    vector<int> v = {1, 1, 1, 2, 2};
    int n = v.size();
    int target = 4;
    vector<vector<int>> ans;
    vector<int> temp;
    combinationSum(0, n, target, v, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto x : ans[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}