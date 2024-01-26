#include<iostream>
using namespace std;

class Solution {
   public:
    int findSum(int A[], int N) {
    	int maxNum = INT_MIN, minNum = INT_MAX;
    	for(int i=0;i<N;i++) {
    	    if(maxNum <= A[i])
    	        maxNum = A[i];
    	    if(minNum >= A[i])
    	        minNum = A[i];
    	}
    	return maxNum+minNum;
    }
};
int main() {
	int t;
    cout << "Enter number of test cases : ";
	cin>>t;
	while(t--) {
        cout << "Enter size of array : ";
	    int n;
	    cin>>n;
        cout << "Enter elements in the array : ";
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<"Sum of maximum and minimum element : " << ans;
	    cout<<"\n";
	}
	return 0;
}