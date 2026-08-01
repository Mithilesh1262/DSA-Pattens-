// input, output, variables, maths

// 1. take 3 no. and print their products..
// 2. take 2 no. and print their average..

#include <iostream>
using namespace std;

int main()
{
    // question 1
    int a, b, c;
    cout << "enter 3 no." << endl;
    cin >> a >> b >> c;
    int d = a * b * c;
    cout << d << endl;

    // Question 2
    int e, f;
    cout << "enter two no" << endl;
    cin >> e >> f;
    int average = (e + f) / 2;
    cout << average << endl;

    return 0;
}

