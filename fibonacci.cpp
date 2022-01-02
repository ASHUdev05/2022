#include <iostream>  
using std::cout;
using std::cin;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

void display(int n)
{
    for (int i = 0; i < n; i++)
        cout << fib(i) << " ";
    cout << "\n";
}
 
int main ()
{
    int n;
    cout << "Enter a number:\n";
    cin >> n;
    display(n);
    return 0;
}