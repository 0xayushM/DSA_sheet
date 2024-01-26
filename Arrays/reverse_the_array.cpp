/* 
- Iterate through the array using two pointers (start and end).
- Swap elements at the start and end pointers.
- Move the start pointer towards the end and the end pointer towards the start until they meet or cross each other
*/

#include<iostream>
using namespace std;

void reverseArray(vector<int>& A, int start, int end) {
    while(start<end) {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}
int main() {
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    vector<int> A;
    int input;
    cout << "Enter elements in array : ";
    for(int i=0;i<n;i++) {
        cin >> input;
        A.push_back(input);
    }
    reverseArray(A,0,n-1);
    cout << "Reversed Array : ";
    for(int i=0;i<n;i++)
        cout << A[i] << " ";
    return 0;
}