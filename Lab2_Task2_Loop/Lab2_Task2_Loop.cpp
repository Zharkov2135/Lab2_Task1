#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, dx;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter dx: ";
    cin >> dx;

    if (dx == 0)
    {
        cout << "Error: dx cannot be 0.\n";
        return 0;
    }

    cout << "\nNo\tX\t\tY\n";

    int i = 1;

    if (dx > 0)
    {
        for (double x = a; x <= b; x += dx)
        {
            double y = pow(cos(x), 2) / (x * x + 1);

            cout << i << "\t"
                << fixed << setprecision(6) << x << "\t"
                << fixed << setprecision(8) << y << "\n";
            i++;
        }
    }
    else
    {
        for (double x = a; x >= b; x += dx)
        {
            double y = pow(cos(x), 2) / (x * x + 1);

            cout << i << "\t"
                << fixed << setprecision(6) << x << "\t"
                << fixed << setprecision(8) << y << "\n";
            i++;
        }
    }

    return 0;
}
