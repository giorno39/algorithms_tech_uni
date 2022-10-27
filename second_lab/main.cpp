
#include <iostream>
#define N 3
#define M 3
using namespace std;

int main(){
// -------------------------- ex 11 --------------------------
//    int arr[N], special_pairs_count;
//    for(int i=0; i<N; i++)
//    {
//        cout << "arr[" << i << "] = ";
//        cin >> arr[i];
//    }
//    for (int i = 0; i < N-1; ++i)
//    {
//
//        if(arr[i] >= 0 & arr[i + 1] < 0){
//            special_pairs_count++;
//        }
//        if(arr[i] < 0 & arr[i + 1] >= 0){
//            special_pairs_count++;
//        }
//        if(arr[i] == 0 & arr[i+1] == 0){
//            continue;
//        }
//    }
//    cout << special_pairs_count;
//    return 0;
// -------------------------- ex 12 --------------------------
//    int arr[N];
//    int special_num_sum = 1;
//    for(int i=0; i<N; i++)
//    {
//        cout << "arr[" << i << "] = ";
//        cin >> arr[i];
//    }
//    for (int i = 0; i < N-1; ++i) {
//        for (int j = 0; j < N; ++j) {
//            if((arr[i] + arr[j]) < 120){
//                int temp_sum = arr[i] * arr[j];
//                special_num_sum *= temp_sum;
//            }
//        }
//        }
//    cout << special_num_sum;

// -------------------------- ex 13 --------------------------
//    int arr[N];
//    int length_of_land = 0, landings = 0;
//    for(int i=0; i<N; i++)
//    {
//        cout << "arr[" << i << "] = ";
//        cin >> arr[i];
//    }
//    for (int i = 0; i <= N - 1; ++i) {
//
//        if(arr[i] == arr[i + 1]){
//        length_of_land++;
//        }else{
//        if(length_of_land != 0){
//            landings++;
//        }
//        length_of_land = 0;}
//
//    }
//
//    cout << landings;


// -------------------------- ex 15 --------------------------
//    int arr[N][M] ,sum = 0;
//    cout << "Enter the elements of two-dimensional array\n";
//    for(int i=0; i<N; i++)
//        for(int j=0; j<M; j++)
//        {
//            cout << "arr[" << i << "][" << j << "] = ";
//            cin >> arr[i][j];
//        }
//
//    for (int i = 0; i < M; ++i) {
//        sum += arr[0][i];
//        sum += arr[N-1][i];
//    }
//    for (int i = 1; i < N - 1; ++i) {
//        sum += arr[i][0];
//        sum += arr[i][M - 1];
//    }
//
//
//    cout << sum;


// -------------------------- ex 16 ------------------------
//    int arr[N][M] ,main_diag_sum = 0, results[3], row_sum=0, under_diag_sum=0;
//    cout << "Enter the elements of two-dimensional array\n";
//    for(int i=0; i<N; i++)
//        for(int j=0; j<M; j++)
//        {
//            cout << "arr[" << i << "][" << j << "] = ";
//            cin >> arr[i][j];
//        }
//
//    for (int i = 0; i < N; ++i) {
//        main_diag_sum += arr[i][i];
//        for (int j = 0; j < M; ++j) {
//            row_sum += arr[i][j];
//            if(i > j){
//                int index_sum = 0, curr_number;
//                index_sum = i + j;
//                curr_number= arr[i][j];
//                if(curr_number < index_sum){
//                    under_diag_sum += curr_number;
//                }
//            }
//        }
//
//
//
//    }
//    results[0] = main_diag_sum;
//    results[1] = row_sum;
//    results[2] = under_diag_sum;

// -------------------------- ex 19 --------------------------
    int arr[N][M] ,secondary_diag_sum = 0;
    cout << "Enter the elements of two-dimensional array\n";
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }

    for (int i = 0; i < N; ++i) {
        secondary_diag_sum += arr[i][N - i - 1];
    }


    cout << secondary_diag_sum;
    return 0;

}
