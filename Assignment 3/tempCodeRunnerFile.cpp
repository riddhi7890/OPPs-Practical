#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            sum -= i;  
        else
            sum += i;  
    }

    cout << "Sum of the series up to " << n << " terms is: " << sum << endl;
}
