#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums)
{
   
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int l = i + 1, r = n - 1;

        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];

            if (sum == 0) {
                ans.push_back({nums[i], nums[l], nums[r]});

                while (l < r && nums[l] == nums[l + 1]) l++;
                while (l < r && nums[r] == nums[r - 1]) r--;

                l++;
                r--;
            }
            else if (sum < 0) {
                l++;
            }
            else {
                r--;
            }
        }
    }
    return ans;
}
void printer(const vector<vector<int>> &arr);
void print(const vector<int> &arr);
void swapin(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    print(nums);
    printer(fourSum(nums));
    return 0;
}

void print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printer(const vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        print(arr[i]);
    }
}