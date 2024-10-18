#include <iostream>

using namespace std;
int add(int, int);
int add(int, int, int);
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum is: " << add(a, b);
    int c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    cout << "Sum is: " << add(a, b, c);
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}