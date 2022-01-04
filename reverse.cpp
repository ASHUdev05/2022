// reverse a given string
#include <iostream>
#include <string>
using std::cout;
using std::cin;

int main(void)
{
    std::string str;
    cout << "Enter a string:\n";
    cin >> str;
    for (int i=str.length()-1; i>=0; i--)
        cout << str[i];
    cout << "\n";
    return 0;
}