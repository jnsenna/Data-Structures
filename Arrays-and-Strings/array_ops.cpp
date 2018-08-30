#include <iostream>

int main() {
    // initialize arrays
    int a[10] = {1, 2, 3, 4, 5} // remaining elements set as default

    // get length
    int asize = sizeof(a) / sizeof(*a);

    cout << "The size of array a is: " << asize << endl;

    // access element
    cout << "The first element of array a is: " << a[0] << endl;

    // get all elements by index
    cout << "BY INDEX: The contents of array a are [";
    for (int i = 0; i < asize; ++i) {
        cout << " " << a[i];
    }
    cout << " ]" << endl;

    // get all elements by reference
    cout << "BY REFERENCE: The contents of array a are [";
    for (int& item: a) {
        cout << " " << item;
    }
    cout << " ]" << endl;

    // modify element in array
    a[0] = 3;
    cout << "The contents of array a now are [";
    for (int& item: a) {
        cout << " " << item;
    }
    cout << " ]" << endl;

    // sort array
    sort(a, a + asize);
    cout << "The contents of array a sorted are [";
    for (int& item: a) {
        cout << " " << item;
    }
    cout << " ]" << endl;
}