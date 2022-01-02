#include <iostream>
using std::cout;
using std::cin;

void isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if(count == 2)
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";   
}

int main()
{
    int n;
    cout << "Enter a number:\n";
    cin >> n;
    isPrime(n);
    return 0;
}