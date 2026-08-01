// if - else , loops
// question 1 : sum of 10 no.
// question 2 : sum of first  10 even no.
//  sum of even no. b/t 20 and 40 (both included)

#include <iostream>
using namespace std;
int main()
{

    // question 1: sum of 10 numbers

    // int sum =0;
    // for(int i = 1; i<=10; i++)
    // {
    //     sum += i;

    // }
    // cout << sum ;

    // question 2: sum of first  10 even no.

    // int sum = 0;
    // for (int i=2; i<=20; i+=2)
    // {
    //     sum += i;

    // }
    // cout << "sum = "<< sum;

    // question :3 sum of even no. b/t 20 and 40 (both included)

    int sum = 0;
    for (int i=20; i<=40; i+=2)
    {
        sum += i;
    }

    cout << "sum ="<< sum; 

        return 0;
}