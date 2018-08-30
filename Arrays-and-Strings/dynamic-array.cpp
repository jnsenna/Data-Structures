#include <iostream>

int main() {
    // initialize vector
    vector<int> v(10, 0);

    // ways to make copies
    vector<int> a(v.begin(),v.end());
    vector<int> b(v);

    // cast array to vector
    int arr[5] = {0, 1, 2, 3, 4};
    vector<int> c(arr, *(&arr + 1));

    // get length of vector
    cout << "The size of vector c is: " << c.size() << endl;

    // access element
    cout << "The first element of vector c is: " << c[0] << endl;

    // iterate through the vector

    // by index
    cout << "BY INDEX: The contents of vector v are [";
    for (int i = 0; i < c.size(); ++i) {
        cout << " " << c[i];
    }
    cout << " ]" << endl;

    // by iterator
    cout << "BY ITERATOR: The contents of vector v are [";
    for (auto item = c.begin(); item != c.end(); ++item) {
        cout << " " << *item;
    }
    cout << " ]" << endl;

    // by reference
    cout << "BY REFERENCE: The contents of vector v are [";
    for (int& item : c) {
        cout << " " << item;
    }
    cout << " ]" << endl;

    // modify element
    c[0] = 10;
    cout << "The contents of vector v are now [";
    for (int& item : c) {
        cout << " " << item;
    }
    cout << " ]" << endl;

    // sort vector
    sort(c.begin(), c.end());
    cout << "The contents of vector v sorted are [";
    for (int& item : c) {
        cout << " " << item;
    }
    cout << " ]" << endl;

    // add new element at end
    c.push_back(20);
    cout << "The contents of vector v are now [";
    for (int& item : c) {
        cout << " " << item;
    }
    cout << " ]" << endl;

    // delete last element
    c.pop_back();
    cout << "The contents of vector v are now [";
    for (int& item : c) {
        cout << " " << item;
    }
    cout << " ]" << endl;
}