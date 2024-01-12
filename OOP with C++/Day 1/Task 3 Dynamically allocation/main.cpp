#include <iostream>
using namespace std;
int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int* dynamicArray = new int[arraySize]; // Allocate memory for the array

    cout << "Enter " << arraySize << " integer values:" <<endl;
    for (int i = 0; i < arraySize; i++) {
        cin >> dynamicArray[i];
    }

    // Print the elements of the array
    cout << "Array elements: ";
    for (int i = 0; i < arraySize; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;


    delete[] dynamicArray; // Deallocate the memory

    return 0;

}
