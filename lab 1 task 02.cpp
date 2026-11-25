#include <iostream>
using namespace std;

int main()
{
    int numbers[20] = {10, 20, 30, 40, 50};
    int index = 3;

    for (int i = index; i <= 4; i++)
    {
        numbers[i] = numbers[i + 1];
    }

    cout << "Array after deletion: ";

    for (int i = 0; i < 4; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
