#include <iostream>
using namespace std;

// ─── Task 1: Congratulations using a single function ───
void congratulate(string name) {
    cout << "Congratulations " << name << "!" << endl;
}

// ─── Task 2: Add 4 float numbers ───
float addFourFloats(float a, float b, float c, float d) {
    return a + b + c + d;
}

// ─── Task 3: Fibonacci series using recursion ───
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int terms) {
    cout << "Fibonacci series: ";
    for (int i = 0; i < terms; i++)
        cout << fibonacci(i) << " ";
    cout << endl;
}

// ─── Task 6: Recursive factorial ───
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    // Task 1
    string name;
    cout << "Enter your name: ";
    cin >> name;
    congratulate(name);

    // Task 2
    cout << "\nSum of 1.1 + 2.2 + 3.3 + 4.4 = "
         << addFourFloats(1.1, 2.2, 3.3, 4.4) << endl;

    // Task 3
    printFibonacci(10);

    // Task 6
    cout << "\nFactorial of 5 = " << factorial(5) << endl;
    cout << "Factorial of 6 = " << factorial(6) << endl;

    return 0;
}
