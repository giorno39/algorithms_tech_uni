#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "How many numbers you want to enter";
    cin >> n;
    while(n < 9){
        cout << "You must enter a number larger than 9.\nEnter another number: ";
        cin >> n;
    }

    int arr[n];

    for(int i = 0; i<n;i++){
        cout << "arr[" << i << "]";
        cin >> arr[i];
    }

    int sum = INT_MIN, curr_sum = 0;
    int special_element;
    for (int i = 4; i <= n - 5; ++i){
        for (int j = i - 4; j < i; ++j) {
            curr_sum += arr[j];
        }
        for (int j = i + 1; j <= i + 4; ++j){
            curr_sum += arr[j];
        }
        if(curr_sum > sum){
            sum = curr_sum;
            special_element = arr[i];
        }
        curr_sum = 0;
    }
    cout << sum << "\n";
    cout << special_element;
    return 0;
}
