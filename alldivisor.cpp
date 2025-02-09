#include <iostream>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;  // Add the divisor
            if (i != n / i) {  // Add the paired divisor (avoid duplicate if i == n/i)
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Sum of all divisors of " << n << " is: " << sumOfDivisors(n) << endl;
    return 0;
}      
