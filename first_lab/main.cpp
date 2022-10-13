#include <iostream>
using namespace std;


int main() {
// ---------------------------- ex. 2 -------------------------------
    int number, sum;
    cout << "Enter a number: ";
    cin >> number;
    sum = number / 100;
    number = number % 100;
    sum += number / 10;
    number = number % 10;
    sum += number;
    cout << "Sum of digits = " << sum << "\n";
// ---------------------------- ex. 4 -------------------------------
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "b = " << b << "\n";
    cout << "a = " << a << "\n";
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "b = " << b << "\n";
    cout << "a = " << a << "\n";
// ---------------------------- ex. 9 -------------------------------
    int x = 2;
    do{
        x = 2 * x + 10;
    }while(x < 100);

    cout << x;


    // ---------------------------------------------------------------
    return 0;

}