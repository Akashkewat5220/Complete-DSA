#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{
    int prefix = 0, total_sum = 0, n = arr.size();
    // Calculate the total sum
    for (int i = 0; i < n; i++)
        total_sum += arr[i];

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        int ans = total_sum - prefix;
        if (ans == prefix)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n); // Resize the vector to hold 'n' elements
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Access the vector elements using indices
    }

    cout << divide(v);
}
