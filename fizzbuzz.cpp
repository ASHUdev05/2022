#include <iostream>
using std::cout;
using std::cin;
 
int main(void)
{
    int n;
    cout << "Enter a number:\n";
    cin >> n;
    for (int i=1; i<=n; i++)
        printf(i%15==0?"FizzBuzz\t": i%3==0? "Fizz\t" : i%5==0? "Buzz\t" : "%d\t", i);
        
    return 0;
}