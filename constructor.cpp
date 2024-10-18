#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b,c;

public:
    Complex()
    {
    }
    /*
        Complex()
        {
            a = 0;
            b = 0;
        }
        */
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(Complex &C)
    {
        a = C.a;
        b = C.b;
    }

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a=" << a << " b=" << b << endl;
    }

    Complex sumGreater(Complex C)
    {
        if ((a + b) > (C.a + C.b))
            return *this;
        else
            return C;
    }
    Complex add(Complex C)
    {
        Complex temp(8, 9);
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2(3, 5), c3(4);
    Complex c4 = c2;
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    cout << endl;
    return 0;
}