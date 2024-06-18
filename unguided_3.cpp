#include <iostream>

using namespace std;

int countNum(const int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int data_2311102024[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int size_2311102024 = sizeof(data_2311102024) / sizeof(data_2311102024[0]);
    int target_2311102024 = 4;

    int count = countNum(data_2311102024, size_2311102024, target_2311102024);

    cout << "Jumlah angka " << target_2311102024 << " terdapat sebanyak : " << count << endl;

    return 0;
}