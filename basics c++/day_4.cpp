// Array, linked list...
//  array - store similar ds  a[5]= {2,4,8,12,16}
//  linked list - store/point   next element 

// ARRAY OPERATION
// access
// update
// traverse
// size

#include<iostream>
using namespace std;
int main()
{
    int array[5] = {2,4,8,12,16};

// access
    cout<< array[3] << " ";   
    cout<< array[4];


// update

    array[0]= 20;
    cout<< array[0] << endl;


// traverse

    for (int i =0;i<5;i++)
    {
        cout<< array[i] << " ";
    }

 // Length of an array

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Length of an array: " << n << endl;

    return 0;
}


