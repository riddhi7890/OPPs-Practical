#include <iostream>
using namespace std;
int main()
{
    double num1, num2, result;
    char O;

    cout << "Choose operators + - * / : " << endl;
    cin >> O;

    cout << "Number 1: " << endl;
    cin >> num1;
    cout << "Number 2: " << endl;
    cin >> num2;

    if(O == '+'){
        cout<<"You choose Addition.."<<endl;
        result = num1 + num2;
        cout<<"Result = "<<result<<endl;
    }

    if(O == '-'){
        cout<<"You choose Subtraction.."<<endl;
        result = num1 - num2;
        cout<<"Result = "<<result<<endl;
    }
    if(O == '*'){
        cout<<"You choose Multiplication.."<<endl;
        result = num1 * num2;
        cout<<"Result = "<<result<<endl;
    }
    if(O == '/'){
        cout<<"You choose Division.."<<endl;
        result = num1 / num2;
        cout<<"Result = "<<result<<endl;
    }
} 
