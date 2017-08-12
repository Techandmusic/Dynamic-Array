#include <iostream>

using namespace std;

int main()
{
    //initialize pointer to NULL value
    int* dynArray = NULL;
    // number of elements to be entered into array
    int arrsize;
    //variable to store elements entered into array
    int element;
    //variable to sum elements in array
    int total = 0;
    cout << "Enter number of elements to add to array: " << endl;
    //read in the size of the array
    cin >> arrsize;
    //allocate number of ints and save ptr in dynArray
    dynArray = new int [arrsize];

    //input loop
    for(int h = 0; h < arrsize; ++h) {
        cout << "Enter int to add to array: " << endl;
        cin >> element;
        dynArray[h] = element;
    }

    cout << endl;

    //display loop
    for(int i = 0; i < arrsize; ++i) {
       cout << "Element " << i << " is: " <<  dynArray[i] << endl;

    }

    //sum loop
    for(int j = 0; j < arrsize; ++j) {
         total = total + dynArray[j];
    }

    cout << "Sum of all elements in array is: " << total << endl;


    // delete array to free memory
    delete [] dynArray ;
    //set pointer to null
    dynArray = NULL;
    return 0;
}
