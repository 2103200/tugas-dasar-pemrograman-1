#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    int n;

    cout << "Please enter the positive integer: ";
    cin >> n;

    while (n < 0) {
        cout << "\nEntered integer is not positive! Please enter the positive integer: "; cin >> n;
    }

    for (int i = 0; i <= (n*n); i++) {
        for (int j = 0; j <= (n*n); j++) {
            if (i == 0 || (i % n == 0) || (j == 0) || (j % n == 0)) {
                cout << setw(2) << "_";
            } else {
                cout << setw(2) << "";
            }
        }
        cout << "\n";
    }
}

