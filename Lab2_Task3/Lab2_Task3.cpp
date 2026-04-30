#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double yStart, yEnd, dy;

    cout << "Enter yStart: ";
    cin >> yStart;
    cout << "Enter yEnd: ";
    cin >> yEnd;
    cout << "Enter dy: ";
    cin >> dy;

    if (dy == 0)
    {
        cout << "Error: dy cannot be 0.\n";
        return 0;
    }

    cout << "\nNo\tY\t\tW\n";

    int i = 1;

    auto printRow = [&](double y)
        {
            bool ok = true;
            double w = 0;

            if (y < 0.5)
            {
                w = y + sin(y);
            }
            else
            {
                // ln(y + cbrt(y)) має вимогу: y + cbrt(y) > 0
                double inside = y + cbrt(y);
                if (inside <= 0)
                {
                    ok = false;
                }
                else
                {
                    w = log(inside);
                }
            }

            cout << i << "\t"
                << fixed << setprecision(6) << y << "\t";

            if (ok)
                cout << fixed << setprecision(8) << w << "\n";
            else
                cout << "undefined\n";

            i++;
        };

    if (dy > 0)
    {
        for (double y = yStart; y <= yEnd; y += dy)
            printRow(y);
    }
    else
    {
        for (double y = yStart; y >= yEnd; y += dy)
            printRow(y);
    }

    return 0;
}
