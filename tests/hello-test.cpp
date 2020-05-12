//A simple hello world program for string and loop testing

#include <string>
#include <iostream>
using namespace std;

//This is a dummy function
int main()
{
    int number = 5;
    string res = hello_function(number);
    cout << res;
    return 0; /*End of the function*/
}

string hello_function(int a)
{
    while (a > 0)
    {
        cout << a;
        a = a - 1;
    }

    if (a <= 0)
    {
        return "Hello World";
    }
    else
    {
        return "Goodbye World";
    }
}