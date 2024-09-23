#include <iostream>
using namespace std;

int main ()
{
    //prompt user to input the numbers
    int number1, number2, number3;
    cout << "Input number 1: ";     //input number 1
    cin >> number1;
    cout << "Input number 2: ";     //input number 2
    cin >> number2;
    cout << "Input number 3: ";     //input number 3
    cin >> number3;

    //check if number 1 is the largest number
    if (number1 >= number2 && number1 >= number3)
        cout << "The largest number is: " << number1 << endl;
    //check if number 2 is the largest number
    else if (number2 >= number1 && number2 >= number3)
        cout << "The largest number is: " << number2 << endl;
    //check if number 3 is the largest number
    else
        cout << "The largest number is: " << number3 << endl;


    return 0;
}
