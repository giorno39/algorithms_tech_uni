#include <iostream>
using namespace std;

//6.Даден е едномерен масив с n елемента. Да се напише програма,
//която намира броя на намаляващите редици от елементи в масива,
//тяхната дължина и най- дългата от тях.


int main() {
    int n;
    cout << "How many elements do you want to enter";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "]";
        cin >> arr[i];
    }


    int length_of_sequence = 1;
    int starting_idx;
    int number_of_sequences = 0;
    int longest_sequence_idx;
    int longest_length_of_sequence = 0;

    for (int i = 0; i < n; ++i) {
        if(length_of_sequence == 1){
            starting_idx = i;
        }
        if(arr[i] > arr[i + 1]){
            length_of_sequence += 1;
        }else{
            if(length_of_sequence == 1){
                continue;
            }
            if(longest_length_of_sequence < length_of_sequence){
                longest_length_of_sequence = length_of_sequence;
                longest_sequence_idx = starting_idx;
            }
            number_of_sequences += 1;
            length_of_sequence = 0;
        }
    }

    if(number_of_sequences == 0){
        cout << "There were no sequences found";
        return 0;
    }

    cout << "The starting idx of the longest sequence is " << longest_sequence_idx << "\n"
    << "it's length is " << longest_length_of_sequence << "\n";

    int end_of_longest_sequence = longest_sequence_idx + longest_length_of_sequence;

    for (int i = longest_sequence_idx; i <  end_of_longest_sequence; ++i) {
        cout << " " << arr[i] << " ";
    }

    cout << "\nthere are " << number_of_sequences << "sequences in the array";


    return 0;
}
