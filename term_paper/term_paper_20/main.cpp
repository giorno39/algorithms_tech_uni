#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to enter";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "arr["<<i<<"]";
        cin >> arr[i];
    }


    int sum = INT_MIN, curr_sum = 0;
    int special_element;
    for (int i = 0; i < n; ++i) {
        if(i < 4){
            for (int j = 0; j <= i; ++j) {
                curr_sum += arr[j];
            }
        }else{
            for (int j = i - 4; j <= i ; ++j) {
                curr_sum += arr[j];
            }
        }

        if(i + 4 >= n - 1){
            for (int j = i + 1; j < n; ++j) {
                curr_sum += arr[j];
            }
        }else{
            for (int j = i + 1; j <= i + 4; ++j) {
                curr_sum += arr[j];
            }
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
