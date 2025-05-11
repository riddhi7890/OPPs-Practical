#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter Number of rows" << endl;
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        if (i % 2 != 0) 
        {
            cout << i << endl;
        }
        else
        {
            for (int j = i; j >= 1; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}