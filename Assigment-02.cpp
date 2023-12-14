#include<iostream>
using namespace std;

int main()
{
    int user_input, result;

    // Input user_input

    cout<< "Enter the value: ";
    cin >> user_input;

    // Assign value to result based on conditions

    if (user_input < 0)
    {
        result = -1;
    }
    else if (user_input >= 0 && user_input <= 5) {
        result = 0;
    }
    else if (user_input >= 6 && user_input <= 12)
    {
        result = 1;
    }
    else if (user_input >= 13 && user_input <= 19)
    {
        result = 2;
    }
    else if (user_input >= 20 && user_input <= 50)
    {
        result = 3;
    }
    else if (user_input >= 51 && user_input <= 60)
    {
        result = 4;
    }
    else if (user_input >= 61 && user_input <= 101)
    {
        result = 5;
    }
    else
    {
        result = -1; // for values greater than 101
    }

    cout << "Result: " << result << endl;

    return 0;
}