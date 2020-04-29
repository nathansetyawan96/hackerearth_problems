#include <iostream>
#include <unordered_set>

void pair_sum(int arr[], int size, int look_for);

using namespace std;

void pair_sum(int arr[], int size, int look_for) {
    unordered_set<int> visited_numbers;
    int difference;
    for(int i=0; i<size; i++) {
        difference = look_for - arr[i];

        if(visited_numbers.find(difference) != visited_numbers.end()) {
            cout << "YES" << endl;
            return;
        }
        visited_numbers.insert(arr[i]);
    }
    cout << "NO" << endl;
    return;
}

int main(int argc, char const *argv[])
{
    int size;
    int look_for;
    cin >> size >> look_for;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    pair_sum(arr, size, look_for);

    return 0;
}
