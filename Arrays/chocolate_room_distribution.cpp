#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long findDifference(vector<long long>& nums,long long students) {
    long long n = nums.size(), m=students;
    sort(nums.begin(),nums.end());
    long long mini = nums[0];
    long long maxi = nums[m-1];
    long long diff = maxi-mini;
    for(long long i=1;i<n-m+1;i++) {
        long long dif = nums[i+m-1] - nums[i];
        diff = min(diff,dif);
    } 
    return diff;
}
int main() {
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    vector<long long> nums;
    long long input;
    cout << "Enter elements in array : ";
    for(int i=0;i<n;i++) {
        cin >> input;
        nums.push_back(input);
    }
    int students;
    cout << "Enter number of students : ";
    cin >> students;
    long long ans = findDifference(nums,students);
    cout << "Minimum difference : " << ans;
    return 0;
}