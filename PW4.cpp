#include <iostream>

using namespace std;

int main()
{
    //10
    int x;
    int y = 3;

    cout << "Enter number x: ";
    cin >> x;
    // індуктивна та дедуктивна
    if (x * y < 15) {
        cout << "Condition is fulfilled" << endl;
    }

    if (x * y >= 15) {
        cout << "Condition is not fulfilled" << endl;
    }
}