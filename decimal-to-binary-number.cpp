#include <iostream>
using namespace std;
int main()
{
    int arr[50], num, i;
    cout << "Enter the number to convert: ";
    cin >> num;
    for (i = 0; num > 0; i++)
    {
        arr[i] = num % 2;
        num = num / 2;
    }
    cout << "Binary of the given number= ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
