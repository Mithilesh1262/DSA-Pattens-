// if - else , loops
// question 1 : sum of 10 no.
// question 2 : sum of first  10 even no.
//  sum of even no. b/t 20 and 40 (both included)





#include <iostream>
using namespace std;
int main()
{

    // question 1: sum of 10 numbers
    int n, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> n;
        sum += n;
    }
    cout << "Sum = " << sum << endl;

// question 2: sum of first  10 even no.
     int sum = 0;
     for (int i= 0; i<=10; i++);
     {
        sum += i*2;
     }

     





   






    return 0;
}