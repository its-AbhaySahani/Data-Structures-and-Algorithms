// List of books codechef
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int M; // Number of books
    cin >> M;

    vector<int> books(M);
    unordered_map<int, int> bookPositions; // Map to store positions of books
    for (int i = 0; i < M; ++i) {
        cin >> books[i];
        bookPositions[books[i]] = i + 1; // Store book position from left
    }

    int N; // Number of entries in register
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int pos;
        cin >> pos;
        cout << books[pos - 1] << endl; // Output book borrowed by ith borrower
        books.erase(books.begin() + pos - 1); // Remove borrowed book from shelf
    }

    return 0;
}
//