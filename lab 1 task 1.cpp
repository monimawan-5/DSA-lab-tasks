#include <iostream>
using namespace std;

int main()
{
    int numbers[20] = {10, 20, 30, 40, 50};
    int value = 15;
    int index = 3;

    for (int i = 5; i > index; i--)
    {
        numbers[i] = numbers[i - 1];
    }

    numbers[index] = value;

    cout << "Array after insertion: ";

    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
