#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() < 4)
            return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> solution;
        for (int i = 0; i < nums.size() - 3; i++)
        {
            if (i == 0 || nums[i] != nums[i - 1])
            {
                for (int j = i + 1; j < nums.size() - 2; j++)
                {
                    if (j == i + 1 || nums[j] != nums[j - 1])
                    {
                        int left = j + 1;
                        int right = nums.size() - 1;
                        while (left < right)
                        {
                            long long sum = nums[left] + nums[right];
                            if (sum == ((long long)target - (long long)nums[i] - (long long)nums[j]))
                            {
                                solution.push_back({nums[i], nums[j], nums[left], nums[right]});

                                while (left < right && nums[left] == nums[left + 1])
                                    left++;
                                while (left < right && nums[right] == nums[right - 1])
                                    right--;
                                left++;
                                right--;
                            }
                            else if (sum > ((long long)target - (long long)nums[i] - (long long)nums[j]))
                            {
                                right--;
                            }
                            else
                            {
                                left++;
                            }
                        }
                    }
                }
            }
        }
        return solution;
    }
};

int main()
{
    int n;
    cin >> n;

    Solution obj;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    vector<vector<int>> solution = obj.fourSum(v, target);
    for (int i = 0; i < solution.size(); i++)
    {
        for (int j = 0; j < solution[i].size(); j++)
        {
            cout << solution[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}