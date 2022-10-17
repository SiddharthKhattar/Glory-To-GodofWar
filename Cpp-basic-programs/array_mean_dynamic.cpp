/* PRogram to calculate mean of all elements of an array */
#include <iostream>

using namespace std;

int main() {
    int size, sum=0;

    cout << "Enter size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average: " << (float) sum / size << endl;

    delete [] arr;

    return 0;
}