// Implement all methods in arrayList including add, remove, get, set, size, isEmpty,etc

#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class ArrayList {
private:
    T *arr;
    int capacity;
    int size;

public:
    ArrayList() : capacity(10), size(0) {
        arr = new T[capacity];
    }

    ~ArrayList() {
        delete[] arr;
    }

    void add(const T& element) {
        if (size == capacity) {
            resize();
        }
        arr[size++] = element;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    T get(int index) const {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }

    void set(int index, const T& element) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        arr[index] = element;
    }

    int getSize() const {
        return size;
    }

    bool isEmpty() const {
        return size == 0;
    }

    void clear() {
        size = 0;
    }

private:
    void resize() {
        capacity *= 2;
        T *temp = new T[capacity];
        for (int i = 0; i < size; ++i) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }
};

int main() {
    ArrayList<int> list;

    list.add(5);
    list.add(10);
    list.add(15);

    cout << "Element at index 1: " << list.get(1) << endl;

    list.remove(1);

    cout << "Element at index 1 after removal: " << list.get(1) << endl;

    list.set(1, 20);

    cout << "Element at index 1 after setting: " << list.get(1) << endl;

    cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << endl;
    cout << "Size of the list: " << list.getSize() << endl;

    list.clear();

    cout << "Is list empty after clear? " << (list.isEmpty() ? "Yes" : "No") << endl;
    cout << "Size of the list after clear: " << list.getSize() << endl;

    return 0;
}

//how to print last element of linked list

