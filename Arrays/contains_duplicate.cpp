#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int count = 0;
        for(auto& x: mp)
        {
            if (x.second > 1)
                count++;
        }
        return count ? true : false;
    }
};

int main()
{
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    cout << "Enter elements in the array : ";
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        nums.push_back(input);
    }
    Solution ob;
    bool ans = ob.containsDuplicate(nums);
    cout << (ans ? "Contains duplicate" : "Does not contain duplicate");
}