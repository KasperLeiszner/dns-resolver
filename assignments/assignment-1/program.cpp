#include <iostream>
#include <string>

using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b){
    if(a == 0 || b == 0) {
        cout << "Error: Division by zero is not allowed!";
        return 0;
    }

    return a / b;
}

int main() {
    float a, b, result;
    char mathExpression;

    cout << "Enter math an basic math expression: ";
    cin >> a >> mathExpression >> b;

    switch(mathExpression) {
        case '+':
            cout << "Result: " << add(a, b);
            break;
        case '-':
            cout << "Result: " << subtract(a, b);
            break;
        case '*':
            cout << "Result: " << multiply(a, b);
            break;
        case '/':
            result = divide(a, b);

            if(result != 0) {
                cout << "Result: " << result;
            }
            break;
        default:
            cout << "Error: Invalid math expression!";
    }

    cout << endl;

    return 0;
}
