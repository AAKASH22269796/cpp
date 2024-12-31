#include <bits/stdc++.h>
using namespace std;

long long sum(long long number) {
    long long sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

long long nthNumberWithSum10(long long n) { 
    vector<long long> numbers;
    long long count = 1;
    long long currentNumber = 19; 

    while (count <= n) {
        if (sum(currentNumber) == 10) {
            numbers.push_back(currentNumber);
            count++;
        }
        currentNumber += 9;
    }

    return numbers[n - 1]; 
}

int main() {
    long long n;
    cout << "Enter the value of n: ";
    cin >> n;
    long long result = nthNumberWithSum10(n);
    cout << "The " << n << "th number with sum 10 is: " << result << endl;
    return 0;
}
