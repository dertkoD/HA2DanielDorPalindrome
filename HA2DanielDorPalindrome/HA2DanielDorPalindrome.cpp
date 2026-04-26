#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    if (x % 10 == 0 && x != 0)
        return false;

    int temp = x;
    int reversed = 0;
    int digit = 0;

    while (temp > reversed)
    {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    if (temp == reversed)
        return true;
    else if (temp == reversed / 10)
        return true;
    else
        return false;
}

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    if (isPalindrome(x))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}