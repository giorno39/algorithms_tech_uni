#include <iostream>
using namespace std;
int number = 0;

int main() {
//
//    char normal_order[] = {"anni"};
//    char reversed_way[] = {"inna"};
//    int length_of_string = 4;
//    bool is_parallel = true;
//
//    for (int i = 0; i < 5; ++i) {
//        if(normal_order[i] != reversed_way[length_of_string - 1 - i]){
//            is_parallel = false;
//        }
//    }
//
//    if(is_parallel){
//        cout << "String is parallel";
//    }else{
//        cout << "String is not parallel";
//    }
//
//    return 0;
int pennies[] = {50, 20, 10, 5, 2, 1};

    return 0;
}
void devide_by_pennies(int sum, const int* pennies, int pennies_to_return){
    if(sum == 0){
        return;
    }
    pennies_to_return += sum / pennies[number];
    sum = sum % pennies[number];
    number += 1;
    devide_by_pennies(sum, pennies, pennies_to_return);
    cout << "Broi moneti po " << pennies[number] << " st. = " << pennies_to_return <<endl;

}
