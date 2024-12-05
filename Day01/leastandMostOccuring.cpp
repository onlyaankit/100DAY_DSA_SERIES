#include <bits/stdc++.h>
using namespace std;

int leastOccurrence(int arr[], int n) {
    unordered_map<int, int> mp;
    // Count occurrences of each element
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Find the element with the least occurrence
    int min_count = INT_MAX;
    int least_occurred_element;
    for (auto& pair : mp) {
        if (pair.second < min_count) {
            min_count = pair.second;
            least_occurred_element = pair.first;
        }
    }
    return least_occurred_element;
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = leastOccurrence(arr, n);
    cout << "The number with the least occurrence is: " << result << endl;

    return 0;
}
