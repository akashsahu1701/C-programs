#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int original_number = num;
    int reverse_number = 0;
    while (num > 0)
    {
        int last_digit;
        last_digit = num % 10;

        reverse_number = reverse_number * 10 + last_digit;
        num = num / 10;
    }
    cout << "reversed number:" << reverse_number << endl;
    int sum = 0;
    num = original_number;
    while (num > 0)
    {
        int last_digit;
        last_digit = num % 10;
        sum += pow(last_digit, 3);
        num = num / 10;
    }
    if (sum == original_number)
    {
        cout << "it is a armstrong number ......";
    }
    else
    {
        cout << "it is not an armstrong number .....";
    }
}