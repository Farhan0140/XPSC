#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// -----------------------------------------------------------------------------
// Arithmetic Functions
// -----------------------------------------------------------------------------

int jog_koro(int a, int b) { return a + b; }

int biyog_koro(int a, int b) { return a - b; }

int gun_koro(int a, int b) { return a * b; }

float vag_koro(float a, float b) {
    if (b == 0) { cout << "Error: Zero diye vag kora jabe na!\n"; return 0; }
    return a / b;
}

int vagsesh_neo(int a, int b) { return a % b; }

float goro_maddho(float a, float b) { return (a + b) / 2.0; }

double ghat_koro(double a, double b) { return pow(a, b); }

long long gunfol_neo(int n) {
    if (n < 0) return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

double mul_neo(double n) { return (n < 0) ? -1 : sqrt(n); }

// -----------------------------------------------------------------------------
// Comparison / Logical Functions
// -----------------------------------------------------------------------------

int boro_neo(int a, int b) { return (a > b) ? a : b; }

int chhoto_neo(int a, int b) { return (a < b) ? a : b; }

int nishchoit_neo(int a) { return abs(a); }

string jogbaijog_ki(int n) { return (n % 2 == 0) ? "Jor" : "Bijor"; }

bool moulik_ki(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

// -----------------------------------------------------------------------------
// String Functions
// -----------------------------------------------------------------------------

string uloto_koro(string str) {
    string rev = "";
    for (int i = str.size() - 1; i >= 0; i--)
        rev += str[i];
    return rev;
}

int boro_koto(string str) { return str.size(); }

bool palindrome_ki(string str) {
    string rev = uloto_koro(str);
    return (str == rev);
}

int swar_gonona(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

// -----------------------------------------------------------------------------
// Array Functions
// -----------------------------------------------------------------------------

int array_jog_koro(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int boro_element(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

int chhoto_element(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}

// -----------------------------------------------------------------------------
// Numeric Utility
// -----------------------------------------------------------------------------
int uloto_songkha(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

float tapman_poriborton(float temp, char type) {
    // type = 'C' means convert to Fahrenheit
    // type = 'F' means convert to Celsius
    if (type == 'C' || type == 'c')
        return (temp * 9/5) + 32;
    else if (type == 'F' || type == 'f')
        return (temp - 32) * 5/9;
    else {
        cout << "Error: Type must be 'C' or 'F'" << endl;
        return 0;
    }
}

// -----------------------------------------------------------------------------
// Fibonacci Sequence
// -----------------------------------------------------------------------------

void fibonacci_dao(int terms) {
    int a = 0, b = 1, next;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= terms; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

// -----------------------------------------------------------------------------
// Variable Swap
// -----------------------------------------------------------------------------

void binimoy_koro(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

