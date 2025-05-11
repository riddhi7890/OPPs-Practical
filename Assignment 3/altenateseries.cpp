#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Series: ";
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            cout << " - " << i;
            sum -= i;
        }
        else
        {
            if (i != 1)
                cout << " + ";
            cout << i;
            sum += i;
        }
    }
    cout<<endl;
    cout << "Sum of the series: " << sum << endl;
}
