#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "\n--- Intermediate values ---\n";
    cout << "x = " << x << endl;
    cout << "|x| = " << fabs(x) << endl;

    if (x >= 1)
    {
        double expArg = -4;
        y = exp(expArg);

        cout << "Branch: x >= 1\n";
        cout << "expArg = " << expArg << endl;
    }
    else if (fabs(x) < 1)
    {
        double inside = 1 - x * x;

        cout << "Branch: |x| < 1\n";
        cout << "inside = 1 - x^2 = " << inside << endl;

        if (inside <= 0)
        {
            cout << "Error: sqrt(inside) is undefined (inside <= 0)\n";
            return 0;
        }

        double root = sqrt(inside);
        y = log10(root);

        cout << "sqrt(inside) = " << root << endl;
    }
    else
    {
        y = atan(x);

        cout << "Branch: x <= -1\n";
    }

    cout << "\nResult:\n";
    cout << "y = " << y << endl;

    return 0;
}
